//
//  Bishop.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#include "Bishop.h"
#include "Chessboard.h"

Bishop::Bishop()
{
    value = 4;
}

void Bishop::MoveBishop(int x_, int y_, int value_)
{
    this->x = x_;
    this->y = y_;
    chessboard[x][y] = value*value_;
}
