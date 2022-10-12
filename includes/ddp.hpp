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

#include "IRuler.hpp"


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
