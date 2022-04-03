//
//  Chessboard.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
//

#include "Chessboard.h"
#include <iostream>

const int N = 8;

int chessboard[8][8] = { 0 };

void showCH()
{
    for (int radek = 0; radek < N; radek++)
    {
        for (int sloupec = 0; sloupec < N; sloupec++)
        {
            //std::cout << chessboard[radek][sloupec] << "  ";
            switch (chessboard[radek][sloupec])
            {
                //vypis bilych figurek
                case 1: { std::cout << "WP" << "  ";}
                    break;
                case 2: { std::cout << "WR" << "  ";}
                    break;
                case 3: { std::cout << "WN" << "  ";}
                    break;
                case 4: { std::cout << "WB" << "  ";}
                    break;
                case 5: { std::cout << "WQ" << "  ";}
                    break;
                case 6: { std::cout << "WK" << "  ";}
                    break;
                
                //vypis prazdnych policek
                case 0: { std::cout << "--" << "  ";}
                    break;
                    
                //vypis cernych figurek
                case -1: { std::cout << "BP" << "  ";}
                    break;
                case -2: { std::cout << "BR" << "  ";}
                    break;
                case -3: { std::cout << "BN" << "  ";}
                    break;
                case -4: { std::cout << "BB" << "  ";}
                    break;
                case -5: { std::cout << "BQ" << "  ";}
                    break;
                case -6: { std::cout << "BK" << "  ";}
                    break;
               
                default: { std::cout << "??" << "  ";}
                    break;
            }
        }
        
        std::cout << "\n";
    }
    std::cout << std::endl;
}
