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
    if (value > 0)
        W = true;
    else
        W = false;
}

void Knight::OptionsKnight()
{
    /*  ---- -2-1 ---- -2+1 ----        ---- souradnice xy od N1
     *  -1-2 ---- ---- ---- -1+2
     *  ---- ---- -N1- ---- ----
     *  +1-2 ---- ---- ---- +1+2
     *  ---- +2-1 ---- +2+1 ----
     */
    
    //pole je volne nebo je obsazeno figurkou druheho tymu a je na hraci plose
    //pro setrvani na hraci plose se mi u policka staci divat zda jsou souradnice mensi/vetsi nez souradnice rohu daneho kvadrantu
    //kvadranty: up left, up right, down left, down right
    //-1-2
    if ((ch[x-1][y-2] == 0  || (ch[x-1][y-2] < 0 &&  W)  || (ch[x-1][y-2] > 0  &&  !W)) &&  x-1 >= 0  &&  y-2 >= 0)
        storeOptions(x-1, y-2);
    
    //-2-1
    if ((ch[x-2][y-1] == 0  || (ch[x-2][y-1] < 0 &&  W)  || (ch[x-2][y-1] > 0  &&  !W)) &&  x-2 >= 0  &&  y-1 >= 0)
        storeOptions(x-2, y-1);
    
    //-2+1
    if ((ch[x-2][y+1] == 0  || (ch[x-2][y+1] < 0 &&  W)  || (ch[x-2][y+1] > 0  &&  !W)) &&  x-2 >= 0  &&  y+1 <= N-1)
        storeOptions(x-2, y+1);
    
    //-1+2
    if ((ch[x-1][y+2] == 0  || (ch[x-1][y+2] < 0 &&  W)  || (ch[x-1][+2] > 0  &&  !W)) &&  x-1 >= 0  &&  y+2 <= N-1)
        storeOptions(x-1, y+2);
    
    //+1+2
    if ((ch[x+1][y+2] == 0  || (ch[x+1][y+2] < 0 &&  W)  || (ch[x+1][y+2] > 0  &&  !W)) &&  x+1 <= N-1  &&  y+2 <= N-1)
        storeOptions(x+1, y+2);
    
    //+2+1
    if ((ch[x+2][y+1] == 0  || (ch[x+2][y+1] < 0 &&  W)  || (ch[x+2][y+1] > 0  &&  !W)) &&  x+2 <= N-1  &&  y+1 <= N-1)
        storeOptions(x+2, y+1);
    
    //+2-1
    if ((ch[x+2][y-1] == 0  || (ch[x+2][y-1] < 0 &&  W)  || (ch[x+2][y-1] > 0  &&  !W)) &&  x+2 <= N-1  &&  y-1 >= 0)
        storeOptions(x+2, y-1);
    
    //+1-2
    if ((ch[x+1][y-2] == 0  || (ch[x+1][y-2] < 0 &&  W)  || (ch[x+1][y-2] > 0  &&  !W)) &&  x+1 <= N-1  &&  y-2 >= 0)
        storeOptions(x+1, y-2);
}
