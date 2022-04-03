//
//  Bishop.h
//  Chess for console
//
//  Created by Jakub Prokop on 03.04.2022.
//

#ifndef Bishop_h
#define Bishop_h

class Bishop {
    int x, y;   //lokace na sachovnici
    int value;  //pro identifikaci barvy a figurky
public:
    Bishop();
    void MoveBishop(int, int, int);        //pohyb
    void OptionsBishop();     //ukazka moznych poli pro tah
    
};

#endif /* Bishop_h */
