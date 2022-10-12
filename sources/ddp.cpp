/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** ddp
*/

#include "ddp.hpp"


std::pair<int,int> IRuler::calculate(prisonner_decision prisonner1_decision, prisonner_decision prisonner2_decision)
{
    int prisonner1_score = 0;
    int prisonner2_score = 0;

    if (prisonner1_decision == SILENCE && prisonner2_decision == SILENCE) {
        prisonner1_score = -1;
        prisonner2_score = -1;
    } else if (prisonner1_decision == SILENCE && prisonner2_decision == BETRAY) {
        prisonner1_score = -10;
        prisonner2_score = 0;
    } else if (prisonner1_decision == BETRAY && prisonner2_decision == SILENCE) {
        prisonner1_score = 0;
        prisonner2_score = -10;
    } else if (prisonner1_decision == BETRAY && prisonner2_decision == BETRAY) {
        prisonner1_score = -5;
        prisonner2_score = -5;
    }
    std::pair<int,int> score = std::make_pair(prisonner1_score, prisonner2_score);
    return score;
}

ddp::ddp()
{
}

ddp::~ddp()
{
    
}