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


class Game {
    Team White, Black;      //vytvoreni tymu
    int moves;              //pocet provedenych tahu (sudy hraje W, lichy hraje B) (zacinam od 0)
    
public:
    Game();
    void play();
};

#endif /* Game_h */
