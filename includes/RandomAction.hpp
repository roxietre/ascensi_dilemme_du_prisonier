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
    protected:
    private:
};

#endif