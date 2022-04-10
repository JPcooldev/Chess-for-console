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

void Knight::initKnight(int x_, int y_, int value_)
{
    x = x_;
    y = y_;
    value = value*value_;
    ch[x][y] = value;
}

void OptionsKnight()
{
    
}
