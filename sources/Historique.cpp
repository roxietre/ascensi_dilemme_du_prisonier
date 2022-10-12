/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Historique
*/

#include "Historique.hpp"
#include <iostream>

Historique::Historique()
{
    _score = std::make_pair(0, 0);
}

Historique::~Historique()
{
}

void Historique::addRound(prisonner_decision p1, prisonner_decision p2)
{
    IRuler * ruler = new IRuler;
    _rounds.push_back(std::make_pair(p1, p2));
    std::pair<int, int> Rscore = ruler->calculate(p1, p2);
    _score.first += Rscore.first;
    _score.second += Rscore.second;
}

std::pair<prisonner_decision, prisonner_decision> Historique::getLastRound()
{
    return _rounds[_rounds.size()];
}

std::vector<std::pair<prisonner_decision, prisonner_decision>> Historique::getRounds()
{
    return _rounds;
}

std::pair<int, int> Historique::getScore()
{
    return _score;
}