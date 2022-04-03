//
//  Queen.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#include "Queen.h"
#include "Chessboard.h"

Queen::Queen()
{
    value = 5;
}

void Queen::MoveQueen(int x_, int y_, int value_)
{
    this->x = x_;
    this->y = y_;
    chessboard[x][y] = value*value_;
}
