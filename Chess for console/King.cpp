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
    move = false;       //zadny tah
}

void King::initKing(int x_, int y_, int value_, bool W_)
{
    x = x_;
    y = y_;
    value = value_;
    ch[x][y] = value;
    W = W_;
}


void OptionsKing()
{
    //rosada
    
    
}

void King::moveK(int x_, int y_)
{
    x = x_;
    y = y_;
    
}
