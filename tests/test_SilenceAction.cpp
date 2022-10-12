/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** test_SilenceAction
*/


#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "SilentAction.hpp"

#include <utility>

Test(SilenceAction, test_silence)
{
    IAction * action = new SilentAction;
    cr_assert_eq(action->getAction(), SILENCE);
}