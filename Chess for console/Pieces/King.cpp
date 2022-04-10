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
    move = false;       //zadny tah
}

void King::initKing(int x_, int y_, int value_)
{
    x = x_;
    y = y_;
    value = value*value_;
    ch[x][y] = value;
    if (value > 0)
        W = true;
    else
        W = false;
}

void OptionsKing()
{
    //rosada
    
    
}
