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
    move = false;
}

//value_ nastavi hodnotu na kladnou(WHITE) nebo zapornou (BLACK)
void Pawn::initPawn(int x_, int y_, int value_, bool W_)
{
    x = x_;
    y = y_;
    value = value_;
    ch[x][y] = value;
    W = W_;
}

void Pawn::OptionsPawn()
{
    //pohyb dopredu
    //pole vepredu je prazdne, jsem spravne barvy a jsem na hraci plose
    if ((ch[x-1][y] == 0  &&  W  &&  x-1 >= 0)  ||  (ch[x+1][y] == 0  &&  !W  &&  x+1 <= N-1))
    {
        if (W)
            storeOptions(x-1, y);
        if (!W)
            storeOptions(x+1, y);
    }
    //pohyb dopredu o 2 pole (jen pri prvnim tahu figurkou)
    //pole +2 vepredu je prazdne a figurka je bez tahu a    jsem na hraci plose
    if (((ch[x-2][y] == 0  &&  W  &&  x-2 >= 0)  ||  (ch[x+2][y] == 0  &&  !W  &&  x+2 <= N-1))  &&  !move)
    {
        if (W)
            storeOptions(x-2, y);
        if (!W)
            storeOptions(x+2, y);
    }
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
    //showOpt();
}

//zmena lokace figurky
void Pawn::moveP(int x_, int y_)
{
    ch[x][y] = 0;
    x = x_;
    y = y_;
    ch[x][y] = value;
}
