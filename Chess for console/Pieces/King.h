//
//  King.h
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#ifndef King_h
#define King_h

class King {
    int x, y;   //lokace na sachovnici
    int value;  //pro identifikaci barvy a figurky
public:
    King();
    void MoveKing(int, int, int);        //pohyb
    void OptionsKing();     //ukazka moznych poli pro tah
    
};

#endif /* King_h */
