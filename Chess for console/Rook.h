//
//  Rook.h
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#ifndef Rook_h
#define Rook_h

class Rook {
    int x, y;   //lokace na sachovnici
    int value;  //pro identifikaci barvy a figurky
    bool move;  //uz tahla = true, jeste netahla = false
    bool W;     //Rook je WHITE = true, je BLACK = false
public:
    Rook();
    void initRook(int, int, int, bool);         //inicializace x,y, value, W
    void OptionsRook();                         //ukazka moznych poli pro tah
    void moveR(int, int);                       //move podle souradnic
};

#endif /* Rook_h */
