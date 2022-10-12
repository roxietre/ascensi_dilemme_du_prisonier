/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** IAction
*/

#ifndef IACTION_HPP_
#define IACTION_HPP_

#include "ddp.hpp"

class IAction {
    public:
        virtual ~IAction() = default;

        virtual prisonner_decision getAction() = 0;
        virtual prisonner_decision getAction(std::pair<prisonner_decision, prisonner_decision>) = 0;
    protected:
    private:
};

#endif /* !IACTION_HPP_ */
