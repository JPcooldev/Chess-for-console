//
//  Queen.h
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#ifndef Queen_h
#define Queen_h

class Queen {
    int x, y;   //lokace na sachovnici
    int value;  //pro identifikaci barvy a figurky
public:
    Queen();
    void MoveQueen(int, int, int);        //pohyb
    void OptionsQueen();     //ukazka moznych poli pro tah
    
};

#endif /* Queen_h */
