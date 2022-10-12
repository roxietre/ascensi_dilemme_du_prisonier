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
        virtual prisonner_decision getAction(std::pair<prisonner_decision, prisonner_decision>){return SILENCE;};
    protected:
    private:
};

#endif /* !SILENTACTION_HPP_ */