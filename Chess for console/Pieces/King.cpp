//
//  King.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#include "King.h"
#include "Chessboard.h"

King::King()
{
    value = 6;
}

void King::MoveKing(int x_, int y_, int value_)
{
    this->x = x_;
    this->y = y_;
    chessboard[x][y] = value*value_;
}
