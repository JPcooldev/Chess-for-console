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
public:
    Rook();
    void MoveRook(int, int, int);        //pohyb
    void OptionsRook();     //ukazka moznych poli pro tah
    
};

#endif /* Rook_h */
