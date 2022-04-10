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
    move = false;
}

//value_ nastavi hodnotu na kladnou(WHITE) nebo zapornou (BLACK)
void Pawn::initPawn(int x_, int y_, int value_)
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

void Pawn::OptionsPawn()
{
    //pohyb dopredu
    //pole vepredu je prazdne  a           jsem na hraci plose
    if (ch[x-1*value][y] == 0  &&  ((W  &&  x-1 >= 0)  ||  (!W  &&  x+1 <= N-1)))
        storeOptions(x-1*value, y);
    
    //pohyb dopredu o 2 pole (jen pri prvnim tahu figurkou)
    //pole +2 vepredu je prazdne a figurka je bez tahu a    jsem na hraci plose
    if (ch[x-2*value][y] == 0 && !move  &&  ((W  &&  x-1 >= 0)  ||  (!W  &&  x+1 <= N-1)))
        storeOptions(x-2*value, y);

    //utok WHITE (dialgonalne +1 na obe strany)
    //       up  left              up  right   a figurka je W     a jsem na hraci plose
    if ((ch[x-1][y-1] < 0  ||  ch[x-1][y+1] < 0) &&  W  &&  x-1 >= 0  &&  y-1 >= 0  &&  y+1 <= N-1)
    {
        //ulozeni moznosti pohybu do vectoru moznosti
        if (ch[x-1][y-1] < 0)
            storeOptions(x-1, y-1);
        if (ch[x-1][y+1] < 0)
            storeOptions(x-1, y+1);
    }
    
    //utok BLACK (dialgonalne -1 na obe strany)
    //     down left             down right    a figurka je B     a jsem na hraci plose
    if ((ch[x+1][y-1] > 0  ||  ch[x+1][y+1] > 0) &&  !W  &&  x+1 <= N-1  &&  y-1 >= 0  &&  y+1 <= N-1)
    {
        if (ch[x+1][y-1] > 0)
            storeOptions(x+1, y-1);
        if (ch[x+1][y+1] > 0)
            storeOptions(x+1, y+1);
    }
}
