//
//  Game.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 11.04.2022.
//

#include "Game.h"
#include "Chessboard.h"
#include <vector>



Game::Game()
{
    White.initT(1);         //inicializace
    Black.initT(0);
}

void Game::play()
{
    std::cout << "Welcome! Lets play some chess.\n\n";
    
    std::cout << "Before every move, you have to choose a piece by writting its coordinates.\n";
    std::cout << "Then a) you can directly write coordinates of the move\n";
    std::cout << "     b) or you can displayed possible options and then make a move\n\n";
    
    std::cout << "Example: a) Input: d2 d4  ENTER\n";
    std::cout << "         b) Input: d2  ENTER\n";
    std::cout << "           (showing options)\n";
    std::cout << "            Move: d4  ENTER\n\n";
    std::cout << "EXIT: Input: q  ENTER\n\n";
    
    std::cout << "PRESS ENTER TO START";
    
    char z;

    do {
        std::cin.get (z);
    } while (z != '\n');      // dokud se char nerovna enter, pokracuji
    
    bool contn = true;      //true pokracuji, false koncim hru
    moves = 0;
    
    // 1. tah, hra zacina
    do {
        showCH();    
        std::cout << "Input: ";
        
        //vstup znaku, vypustim prazdne znaky
        //musim identifikovat zda jde moznost a) ci b)
        do {
            std::cin.get(z);
            if (z != ' ' && z != '\n')
                vec.push_back(char_on_int(z));              // ulozeni inputu do vec
                                                            // znak preveden na cislo kvuli hledani pozice v int ch[][] (sachovnice)
                                                            // prvky se do vec ulozi v poradi 1. sloupec, 2. radek
            if (z == 'q')                                   // q pro QUIT
                contn = false;
            
        } while (z != '\n');                                // enterem skonci input
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     //vycisteni bufferu
        
        if (moves%2 == 0)                                   // na tahu je WHITE
        {
            White.optT(vec[1], vec[0]);                     // moznosti pro tah
            showCH();
            std::cout << "\n" << "Move: ";
            do {
                std::cin.get(z);                            // kam chci tahnout s figurkou
                if (z != ' ' && z != '\n')                  // pro moznost a) !!ZATIM NEPOUZITO
                    vec.push_back(char_on_int(z));          // ulozeni inputu do vec
                
            } while (z != '\n');                            // konec iputu pri stisknuti ENTER
            White.moveT(vec[1], vec[0], vec[3], vec[2]);                    // move figurky
            vec.clear();                                    // vyprazdneni vec
            
        }
        if (moves%2 == 1)
        {                     // na tahu je BLACK
            Black.optT(vec[1], vec[0]);
            showCH();
            std::cout << "\n" << "Move: ";
            do {
                std::cin.get(z);
                if (z != ' ' && z != '\n')
                    vec.push_back(char_on_int(z));
                
            } while (z != '\n');
            Black.moveT(vec[1], vec[0], vec[3], vec[2]);
            vec.clear();
            
        }
        
        moves++;
        
    } while (contn);
    

}


