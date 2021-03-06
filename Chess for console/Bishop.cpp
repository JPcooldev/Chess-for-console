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
}

void Bishop::initBishop(int x_, int y_, int value_, bool W_)
{
    x = x_;
    y = y_;
    value = value_;
    ch[x][y] = value;
    W = W_;
}

void Bishop::OptionsBishop()
{
    //rozhled do diagonalnich smeru od Bishop
    int i = 1;
    //up and left
    //pole up and left je prazdne  nebo   obsazeno cernou  nebo        obsazeno bilou           a je na hraci plose
    while ((ch[x-i][y-i] == 0  || (ch[x-i][y-i] < 0 &&  W)  || (ch[x-i][y-i] > 0  &&  !W)) &&  y-i >= 0  &&  x-i >= 0)
    {
        storeOptions(x-i, y-i);     // ulozeni moznosti do v1
        if (ch[x-i][y-i] != 0)      // pokud je na diagonalnim poli figurka tak nekoukam dal po diagonale
            break;
        i++;
    }
    //reinicializace i na 1
    i = 1;
    //up and right
    while ((ch[x-i][y+i] == 0  || (ch[x-i][y+i] < 0 &&  W)  || (ch[x-i][y+i] > 0  &&  !W)) &&  y+i <= N-1  &&  x-i >= 0)
    {
        storeOptions(x-i, y+i);
        if (ch[x-i][y+i] != 0)
            break;
        i++;
    }
    i = 1;
    //down and left
    while ((ch[x+i][y-i] == 0  || (ch[x+i][y-i] < 0 &&  W)  || (ch[x+i][y-i] > 0  &&  !W)) &&  y-i >= 0  &&  x+i <= N-1)
    {
        storeOptions(x+i, y-i);
        if (ch[x+i][y-i] != 0)
            break;
        i++;
    }
    i = 1;
    //down and right
    while ((ch[x+i][y+i] == 0  || (ch[x+i][y+i] < 0 &&  W)  || (ch[x+i][y+i] > 0  &&  !W)) &&  y+i <= N-1  &&  x+i <= N-1)
    {
        storeOptions(x+i, y+i);
        if (ch[x+i][y+i] != 0)
            break;
        i++;
    }
    //showOpt();
}

void Bishop::moveB(int x_, int y_)
{
    ch[x][y] = 0;
    x = x_;
    y = y_;
    ch[x][y] = value;
}
