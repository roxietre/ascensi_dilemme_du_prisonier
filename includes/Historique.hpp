/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** Historique
*/

#ifndef HISTORIQUE_HPP_
#define HISTORIQUE_HPP_

#include "IRuler.hpp"
#include <vector>

class Historique {
    public:
        Historique();
        ~Historique();
        void addRound(prisonner_decision p1, prisonner_decision p2);
        std::pair<prisonner_decision, prisonner_decision> getLastRound();
        std::vector<std::pair<prisonner_decision, prisonner_decision>> getRounds();
    protected:
    private:
        std::vector<std::pair<prisonner_decision, prisonner_decision>> _rounds;
        std::pair<int, int> _score;
};

#endif /* !HISTORIQUE_HPP_ */
