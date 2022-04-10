//
//  Queen.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#include "Queen.h"
#include "Chessboard.h"

Queen::Queen()
{
    value = 5;
}

void Queen::initQueen(int x_, int y_, int value_)
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

void Queen::OptionsQueen()
{
    /*  slozeni moznosti Rook a Bishop
     *  prvni se projedou moznosti Rook a pote Bishop
     *
     */
    
    int i = 1;
    //zkoumani moznosti left
    //zkontroluji pole nalevo, pokud je mozny pohyb tak jej ulozim do vector v1 (moznosti pohybu) a koukam zase vedle
    //pokud je pole vedle obsazeno figurkou stejneho tymu cyklus while se ani neuskutecni
    //pole left je  prazdne         obsazeno cernou           obsazeno bilou        a jsem na hraci plose
    while ((ch[x][y-i] == 0  || (ch[x][y-i] < 0 &&  W)  || (ch[x][y-i] > 0 &&  !W)) &&  y-i >= 0)
    {
        storeOptions(x, y-i);
        //vedle Rook je figurka a nemuzu zkoumat dalsi pole
        if (ch[x][y-i] != 0)
            break;
        i++;
    }
    //i znova inicializuji na 1 do dalsiho while cyklu
    i = 1;
    //zkoumani moznosti right
    while ((ch[x][y+i] == 0  || (ch[x][y+i] < 0 &&  W)  || (ch[x][y+i] > 0 &&  !W)) &&  y+i <= N-1)
    {
        storeOptions(x, y+i);
        if (ch[x][y+1] != 0)
            break;
        i++;
    }
    i = 1;
    //zkoumani moznosti up
    while ((ch[x-i][y] == 0  || (ch[x-i][y] < 0 &&  W)  || (ch[x-i][y] > 0 &&  !W)) &&  x-i >= 0)
    {
        storeOptions(x-i, y);
        if (ch[x-i][y] != 0)
            break;
        i++;
    }
    i = 1;
    //zkoumani moznosti down
    while ((ch[x+i][y] == 0  || (ch[x+i][y] < 0 &&  W)  || (ch[x+i][y] > 0 &&  !W)) &&  x+i <= N-1)
    {
        storeOptions(x+i, y);
        if (ch[x+i][y] != 0)
            break;
        i++;
    }
    
    
    //rozhled do diagonalnich smeru od Bishop
    i = 1;
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
}
