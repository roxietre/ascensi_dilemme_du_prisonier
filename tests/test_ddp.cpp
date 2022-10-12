/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** test_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "IRuler.hpp"

#include <utility>

void redirect_all_std(void)
{
    cr_redirect_stderr();
    cr_redirect_stdout();
}

Test(calculate, test_silence, .init=redirect_all_std)
{
    IRuler * ruler = new IRuler;
    std::pair<int, int> p = ruler->calculate(SILENCE, SILENCE);
    cr_assert_eq(p.first, -1);
    cr_assert_eq(p.second, -1);
}

Test(calculate, test_betray_p1, .init=redirect_all_std)
{
    IRuler * ruler = new IRuler;
    std::pair<int, int> p = ruler->calculate(BETRAY, SILENCE);
    cr_assert_eq(p.first, 0);
    cr_assert_eq(p.second, -10);
}

Test(calculate, test_betray_p2, .init=redirect_all_std)
{
    IRuler * ruler = new IRuler;
    std::pair<int, int> p = ruler->calculate(SILENCE, BETRAY);
    cr_assert_eq(p.first, -10);
    cr_assert_eq(p.second, 0);
}

Test(calculate, test_betray_all, .init=redirect_all_std)
{
    IRuler * ruler = new IRuler;
    std::pair<int, int> p = ruler->calculate(BETRAY, BETRAY);
    cr_assert_eq(p.first, -5);
    cr_assert_eq(p.second, -5);
}