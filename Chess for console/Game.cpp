//
//  Game.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 11.04.2022.
//

#include "Game.h"
#include "Chessboard.h"

Game::Game()
{
    White.initT(1);         //inicializace tymove hodnoty, 
    Black.initT(-1);
    moves = 0;
}

void Game::play()
{
  
    std::cout << "Welcome! Lets play some chess.\n\n";
    
    std::cout << "Before every move, you have to choose a piece by writting its coordinates.\n";
    std::cout << "Then a) you can directly write coordinates of the move\n";
    std::cout << "     b) or you can displayed possible options and then make a move\n\n";
    
    std::cout << "Example: a) d2 d4  ENTER\n";
    std::cout << "         b) d2  ENTER\n";
    std::cout << "           (showing options)\n";
    std::cout << "            d4  ENTER\n\n";
    
    std::cout << "PRESS ANY KEY TO START";
    /*
    char z;
    std::cin >> z;
    std::cin.clear();
    std::cin.ignore(1, '\n');
     */
    showCH();       //pocatecni stav
    
    bool contn = true;      //true pokracuji, false koncim hru
    do {
        //na tahu je WHITE (zacina nebot moves = 0)
        if (moves%2 == 0) {
            ;
        }
        //na tahu je BLACK
        if (moves%2 == 1) {
            ;
        }

    } while (contn);
   

}
