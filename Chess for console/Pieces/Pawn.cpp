//
//  Pawn.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
//

#include "Pawn.h"
#include "Chessboard.h"

Pawn::Pawn()
{
    value = 1;
}

void Pawn::MovePawn(int x_, int y_, int value_) //value_ nastavi hodnotu na kladnou(WHITE) nebo zapornou (BLACK)
{
    this->x = x_;
    this->y = y_;
    chessboard[x][y] = value*value_;
}

void Pawn::OptionsPawn()
{
    //pokud je prvni tah, muze o 2 pole dopredu
    /*
     if (<#condition#>) {
        <#statements#>
    }
    */
    
    if (chessboard[x][y]) {
        <#statements#>
    }
}
