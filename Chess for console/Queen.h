//
//  Queen.h
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#ifndef Queen_h
#define Queen_h

class Queen {
    int x, y;       //lokace na sachovnici
    int value;      //pro identifikaci barvy a figurky
    bool W;         // je WHITE = true, je BLACK = false
public:
    Queen();
    void initQueen(int, int, int);         //inicializace
    void OptionsQueen();                   //ukazka moznych poli pro tah
    
};

#endif /* Queen_h */
