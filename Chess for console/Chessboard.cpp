//
//  Chessboard.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
//

#include "Chessboard.h"
#include <iostream>

const int N = 8;

int ch[8][8] = { 0 };

void showCH()
{
    for (int radek = 0; radek < N; radek++)
    {
        //std::cout << N - radek << " |";
        std::cout << radek << " |";
        
        for (int sloupec = 0; sloupec < N; sloupec++)
        {
            ///*
            if (!v1.empty()) {
                //kontrola daneho pole a poli ulozenych ve v1 jako moznosti pohybu (kvuli obarveni)
                for (int i = 0; i <= v1.size()-2; i += 2) {
                    if (radek == v1[i]  &&  sloupec == v1[i+1])
                    {
                        //obarveni moznosti pohybu
                        std::cout << BOLDGREEN;
                        //vymazu pouzite souradnice moznosti
                        v1.erase(v1.begin() + i);
                        v1.erase(v1.begin() + i);
                        break;
                    }
                }
            }
            //*/
                
            switch (ch[radek][sloupec])
            {
                //vypis bilych figurek
                case 1: std::cout << "WP" << "  "; break;
                case 2: std::cout << "WR" << "  "; break;
                case 3: std::cout << "WN" << "  "; break;
                case 4: std::cout << "WB" << "  "; break;
                case 5: std::cout << "WQ" << "  "; break;
                case 6: std::cout << "WK" << "  "; break;
                
                //vypis prazdnych policek
                case 0: std::cout << "==" << "  "; break;
                    
                //vypis cernych figurek
                case -1: std::cout << "BP" << "  "; break;
                case -2: std::cout << "BR" << "  "; break;
                case -3: std::cout << "BN" << "  "; break;
                case -4: std::cout << "BB" << "  "; break;
                case -5: std::cout << "BQ" << "  "; break;
                case -6: std::cout << "BK" << "  "; break;
               
                default: std::cout << "??" << "  "; break;
            }
            std::cout << RESET;
        }
        std::cout << std::endl;
    }
    std::cout << "  -------------------------------\n   ";
    for (int i = 0; i < N; i++) {
        //std::cout << char(65+i) << "   ";
        std::cout << i << "   ";
    }
    std::cout << std::endl << std::endl;
}

/*
void rotateCH()
{
    int **tmp = NULL;      //vytvoreni ukazatele na ukazatel
    tmp = new int*[N];     //v ukazateli vytvorit pole ukazatelu
    
    for (int i = 0; i < N; i++)     //vytvoreni 2D pole
        tmp[i] = new int[N];

    //otoceni do tmp 2D pole
    for (int radek = 0; radek < N; radek++)
        for (int sloupec = 0; sloupec < N; sloupec++)
            tmp[radek][sloupec] = ch[N-1-radek][N-1-sloupec];
    
    //prepsani otoceni zpatky do ch 2D pole
    for (int radek = 0; radek < N; radek++)
        for (int sloupec = 0; sloupec < N; sloupec++)
            ch[radek][sloupec] = tmp[radek][sloupec];
        
}
*/

std::vector<int> v1;

void storeOptions(int x, int y)
{
    v1.push_back(x);
    v1.push_back(y);
}

void showOpt()
{
    
    
}
