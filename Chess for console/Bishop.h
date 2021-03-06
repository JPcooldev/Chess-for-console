//
//  Bishop.h
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#ifndef Bishop_h
#define Bishop_h

class Bishop {
    int x, y;       // lokace na sachovnici
    int value;      // pro identifikaci barvy a figurky
    bool W;         // je WHITE = true, je BLACK = false
public:
    Bishop();
    void initBishop(int, int, int, bool);           //inicializace x,y, value, W
    void OptionsBishop();                           //ukazka moznych poli pro tah
    void moveB(int, int);                           //move podle souradnic
};

#endif /* Bishop_h */
