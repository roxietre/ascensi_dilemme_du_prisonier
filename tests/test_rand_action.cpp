/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** test_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "RandomAction.hpp"

Test (rand_action, test_rand_action)
{
    srand (time(0));
    int i = rand() % 2;
    IAction * action = new RandomAction;

    cr_assert_eq(i, action->getAction());
}