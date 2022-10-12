/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** MimeAction
*/

#include "MimeAction.hpp"

MimeAction::MimeAction()
{
}

MimeAction::~MimeAction()
{
}

prisonner_decision MimeAction::getAction()
{
    return SILENCE;
}

prisonner_decision MimeAction::getAction(std::pair<prisonner_decision, prisonner_decision> lastRound)
{
    if (lastRound.first == BETRAY)
        return BETRAY;
    else
        return SILENCE;
}