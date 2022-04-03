//
//  Pawn.h
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
//

#ifndef Pawn_h
#define Pawn_h


class Pawn {
    int x, y;   //lokace na sachovnici
    int value;  //pro identifikaci barvy a figurky
public:
    Pawn();
    void MovePawn(int, int, int);        //pohyb 
    void OptionsPawn();     //ukazka moznych poli pro tah
    
};



#endif /* Pawn_h */
