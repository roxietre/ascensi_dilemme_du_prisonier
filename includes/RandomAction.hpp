/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** SilentAction
*/

#ifndef SILENTACTION_HPP_
#define SILENTACTION_HPP_

#include "IAction.hpp"
#include <cstdlib>

class RandomAction: public IAction {
    public:
        RandomAction();
        ~RandomAction();
        prisonner_decision getAction();
        virtual prisonner_decision getAction(std::pair<prisonner_decision, prisonner_decision>){return SILENCE;};
    protected:
    private:
};

#endif