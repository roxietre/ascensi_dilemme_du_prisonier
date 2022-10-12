/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** IRuler
*/

#ifndef IRULER_HPP_
#define IRULER_HPP_

#include <utility>

enum prisonner_decision {
    SILENCE,
    BETRAY
};


class IRuler {
    public:
        IRuler() = default;
        ~IRuler() = default;
        std::pair<int,int> calculate(prisonner_decision prisonner1_decision, prisonner_decision prisonner2_decision);
    private:
};

#endif /* !IRULER_HPP_ */
