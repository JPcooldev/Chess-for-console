//
//  main.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
//

#include <iostream>
#include "Chessboard.h"
#include "Team.h"



int main()
{
    White TeamWhite;
    Black TeamBlack;
    
    //showCH();
    
    //TeamWhite.WP4.OptionsPawn();
    //
    //for (int i = 0; i < v1.size(); i++) {
    //
    //    std::cout << v1[i] << "  ";
    //    if (i%2 == 1)
    //        std::cout << std::endl;
    //}
    //showCH();
    
    TeamWhite.WQ.OptionsQueen();
    
    for (int i = 0; i < v1.size(); i++) {
    
        std::cout << v1[i] << "  ";
        if (i%2 == 1)
            std::cout << std::endl;
    }
    showCH();
    
    
    
    return 0;
}
