//
//  Knight.h
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#ifndef Knight_h
#define Knight_h

class Knight {
    int x, y;   //lokace na sachovnici
    int value;  //pro identifikaci barvy a figurky
public:
    Knight();
    void MoveKnight(int, int, int);        //pohyb
    void OptionsKnight();     //ukazka moznych poli pro tah
    
};


#endif /* Knight_h */
