/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Historique
*/

#include "Historique.hpp"

Historique::Historique()
{
    _score = std::make_pair(0, 0);
}

Historique::~Historique()
{
}

void Historique::addRound(prisonner_decision p1, prisonner_decision p2)
{
    _rounds.push_back(std::make_pair(p1, p2));
    
}

std::pair<prisonner_decision, prisonner_decision> Historique::getLastRound()
{
    return _rounds[_rounds.size()];
}

std::vector<std::pair<prisonner_decision, prisonner_decision>> Historique::getRounds()
{
    return _rounds;
}