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

Test(historique, test_last_round)
{
    Historique * historique = new Historique;

    historique->addRound(SILENCE, BETRAY);
    std::pair<prisonner_decision, prisonner_decision> lastRound = historique->getLastRound();
    cr_assert_eq(lastRound.first, SILENCE);
    cr_assert_eq(lastRound.second, BETRAY);
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