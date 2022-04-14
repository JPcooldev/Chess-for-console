//
//  Pawn.h
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
//

#ifndef Pawn_h
#define Pawn_h


class Pawn {
    int x, y;       //lokace na sachovnici
    int value;      //pro identifikaci barvy a figurky
    bool move;      //pro overeni zda uz figurka udelala tah (true-tah, false-bez tahu)
    bool W;         //je WHITE = true, je BLACK = false
public:
    Pawn();
    //~Pawn();
    void initPawn(int, int, int, bool);         //inicializace x,y, value, W
    void OptionsPawn();                         //ukazka moznych poli pro tah
    void moveP(int, int);                       //move podle souradnic
    
};



#endif /* Pawn_h */
