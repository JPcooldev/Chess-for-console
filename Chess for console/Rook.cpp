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
    move = false;   //bez pohybu (kvuli moznosti rosady)
}

void Rook::initRook(int x_, int y_, int value_, bool W_)
{
    x = x_;
    y = y_;
    value = value_;
    ch[x][y] = value;
    W = W_;
}

void Rook::OptionsRook()
{
    //rosada (pouze kdyz se netahlo s King ani Rook a mezi nimi nestoji zadna figurka)
    //if () {
    //
    //}
    
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
        if (ch[x][y+i] != 0)
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
    //showOpt();
}

void Rook::moveR(int x_, int y_)
{
    ch[x][y] = 0;
    x = x_;
    y = y_;
    ch[x][y] = value;
}
