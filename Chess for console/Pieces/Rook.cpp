//
//  Rook.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#include "Rook.h"
#include "Chessboard.h"

Rook::Rook()
{
    value = 2;
}

void Rook::MoveRook(int x_, int y_, int value_)
{
    this->x = x_;
    this->y = y_;
    chessboard[x][y] = value*value_;
}
