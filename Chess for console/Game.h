//
//  Game.h
//  Chess for console
//
//  Created by Jakub Prokop on 09.04.2022.
//

#ifndef Game_h
#define Game_h

#include <iostream>

#include "Team.h"
#include "Chessboard.h"


class Game {
    Team White, Black;      //vytvoreni tymu
    
public:
    Game();
    void play();
};

#endif /* Game_h */
