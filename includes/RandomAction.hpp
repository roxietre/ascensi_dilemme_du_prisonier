/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** SilentAction
*/

#ifndef SILENTACTION_HPP_
#define SILENTACTION_HPP_

#include "IAction.hpp"
#include <rand>

class randomAction: public IAction {
    public:
        randomAction();
        ~randomAction();
        prisonner_decision getAction();
    protected:
    private:
};