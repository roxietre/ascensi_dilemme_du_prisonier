/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** SilentAction
*/

#include "RandomAction.hpp"

RandomAction::RandomAction()
{
}

RandomAction::~RandomAction()
{
}

prisonner_decision RandomAction::getAction()
{
    srand (time(0));
    int random = rand() % 2;
    if (random == 0)
        return SILENCE;
    else
        return BETRAY;
}