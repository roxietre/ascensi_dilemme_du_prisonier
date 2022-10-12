/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** MimeAction
*/

#ifndef MIMEACTION_HPP_
#define MIMEACTION_HPP_

#include "IAction.hpp"

class MimeAction : public IAction{
    public:
        MimeAction();
        ~MimeAction();
        prisonner_decision getAction();
        prisonner_decision getAction(std::pair<prisonner_decision, prisonner_decision> lastRound);
    protected:
    private:
};

#endif /* !MIMEACTION_HPP_ */
