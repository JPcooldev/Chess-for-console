//
//  Knight.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#include "Knight.h"
#include "Chessboard.h"

Knight::Knight()
{
    value = 3;
}

void Knight::MoveKnight(int x_, int y_, int value_)
{
    this->x = x_;
    this->y = y_;
    chessboard[x][y] = value*value_;
}
