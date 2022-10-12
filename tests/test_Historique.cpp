/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** test_Historique
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "Historique.hpp"

#include "ddp.hpp"

#include <utility>
#include <iostream>

Test(historique, test_last_round)
{
    Historique * historique = new Historique;

    historique->addRound(SILENCE, SILENCE);
    std::pair<prisonner_decision, prisonner_decision> lastRound = historique->getLastRound();
    cr_assert_eq(lastRound.first, SILENCE);
    cr_assert_eq(lastRound.second, SILENCE);
}

Test(historique, test_all_historique)
{
    Historique * historique = new Historique;

    historique->addRound(SILENCE, BETRAY);
    historique->addRound(BETRAY, SILENCE);
    std::vector<std::pair<prisonner_decision, prisonner_decision>> rounds = historique->getRounds();
    cr_assert_eq(rounds[0].first, SILENCE);
    cr_assert_eq(rounds[1].first, BETRAY);
}

Test(historique, test_score)
{
    Historique * historique = new Historique;

    historique->addRound(SILENCE, BETRAY);
    std::pair<int, int> score = historique->getScore();
    cr_assert_eq(score.first, -10);
    cr_assert_eq(score.second, 0);
}