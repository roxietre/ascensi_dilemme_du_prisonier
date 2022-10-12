/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** SilentAction
*/

#ifndef SILENTACTION_HPP_
#define SILENTACTION_HPP_

#include "IAction.hpp"

class SilentAction: public IAction {
    public:
        SilentAction();
        ~SilentAction();
        prisonner_decision getAction();
    protected:
    private:
};

#endif /* !SILENTACTION_HPP_ */