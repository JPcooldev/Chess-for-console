//
//  King.h
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#ifndef King_h
#define King_h

class King {
    int x, y;       //lokace na sachovnici
    int value;      //pro identifikaci barvy a figurky
    bool move;      //pro overeni zda uz figurka udelala tah (true = tah, false = bez tahu)
    bool W;         //je WHITE = true, je BLACK = false
public:
    King();
    void initKing(int, int, int);       //inicializace
    void OptionsKing();                 //ukazka moznych poli pro tah
    void moveK(int, int);               //move podle souradnic
};

#endif /* King_h */
