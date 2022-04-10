//
//  Knight.h
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#ifndef Knight_h
#define Knight_h

class Knight {
    int x, y;       //lokace na sachovnici
    int value;      //pro identifikaci barvy a figurky
    bool W;         //Knight je WHITE = true, je BLACK = false
public:
    Knight();
    void initKnight(int, int, int);         //inicializace
    void OptionsKnight();                   //ukazka moznych poli pro tah
    
};


#endif /* Knight_h */
