/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** test_MimeAction
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "MimeAction.hpp"
#include "Historique.hpp"

Test(MimeAction, test_MimeAction)
{
    IAction * mime = new MimeAction;
    Historique * history = new Historique;
    history->addRound(SILENCE, SILENCE);
    prisonner_decision action = mime->getAction(history->getLastRound());
    cr_assert_eq(action, SILENCE);
}