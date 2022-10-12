/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** ddp
*/

#ifndef DDP_HPP_
#define DDP_HPP_

#include <iostream>
#include <utility>
#include <vector>

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


class ddp {
    public:
        ddp();
        ~ddp();
    protected:
    private:
        std::vector<std::pair<int,int>> _score;
        std::vector<IRuler> _rulers;
};

#endif /* !DDP_HPP_ */
