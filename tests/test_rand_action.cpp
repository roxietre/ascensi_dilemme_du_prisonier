/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** test_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "RandomAction.hpp"

#include <rand>

Test (rand_action, test_rand_action, .init=redirect_all_std)
{
    srand (time(0));
    int i = rand() % 2;
    IAction * action = new RandomAction;

    cr_assert_eq(i, action->getAction());
}