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
        virtual ~IRuler() = default;
        virtual std::pair<int,int> calculate(prisonner_decision prisonner1_decision, prisonner_decision prisonner2_decision) = 0;
    }


class ddp {
    public:
        ddp();
        ~ddp();
    protected:
    private:
};

#endif /* !DDP_HPP_ */
