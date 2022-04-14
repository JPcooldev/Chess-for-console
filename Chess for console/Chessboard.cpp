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
        std::cout << N - radek << " |";
        //std::cout << radek << " |";
        
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
                        //std::cout << "-";
                        //vymazu pouzite souradnice moznosti
                        v1.erase(v1.begin() + i);
                        v1.erase(v1.begin() + i);
                        break;
                    }
                }
            }
            //*/
            //vypis prazdnych policek
            if (ch[radek][sloupec] >= -10 && ch[radek][sloupec] <= 10)
                std::cout << "==" << "  ";
            
            //vypis bilych figurek
            else if (ch[radek][sloupec] >= 10 && ch[radek][sloupec] <= 20)
                std::cout << "WP" << "  ";
            else if (ch[radek][sloupec] >= 20 && ch[radek][sloupec] <= 30)
                std::cout << "WR" << "  ";
            else if (ch[radek][sloupec] >= 30 && ch[radek][sloupec] <= 40)
                std::cout << "WN" << "  ";
            else if (ch[radek][sloupec] >= 40 && ch[radek][sloupec] <= 50)
                std::cout << "WB" << "  ";
            else if (ch[radek][sloupec] >= 50 && ch[radek][sloupec] < 60)
                std::cout << "WQ" << "  ";
            else if (ch[radek][sloupec] == 60)
                std::cout << "WK" << "  ";
            
            //vypis cernych figurek
            else if (ch[radek][sloupec] >= -20 && ch[radek][sloupec] <= -10)
                std::cout << "BP" << "  ";
            else if (ch[radek][sloupec] >= -30 && ch[radek][sloupec] <= -20)
                std::cout << "BR" << "  ";
            else if (ch[radek][sloupec] >= -40 && ch[radek][sloupec] <= -30)
                std::cout << "BN" << "  ";
            else if (ch[radek][sloupec] >= -50 && ch[radek][sloupec] <= -40)
                std::cout << "BB" << "  ";
            else if (ch[radek][sloupec] > -60 && ch[radek][sloupec] <= -50)
                std::cout << "BQ" << "  ";
            else if (ch[radek][sloupec] == -60)
                std::cout << "BK" << "  ";
            
            else
                std::cout << "??" << "  ";
          
            std::cout << RESET;
        }
        std::cout << std::endl;
    }
    std::cout << "  -------------------------------\n   ";
    for (int i = 0; i < N; i++) {
        std::cout << char(65+i) << "   ";
        //std::cout << i << "   ";
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

int char_on_int(char z)          //prevedeni char na int
{
    int a;
    switch (z) {
        case 'a': { a = 0; break; }
        case 'b': { a = 1; break; }
        case 'c': { a = 2; break; }
        case 'd': { a = 3; break; }
        case 'e': { a = 4; break; }
        case 'f': { a = 5; break; }
        case 'g': { a = 6; break; }
        case 'h': { a = 7; break; }
        case '1': { a = 7; break; }
        case '2': { a = 6; break; }
        case '3': { a = 5; break; }
        case '4': { a = 4; break; }
        case '5': { a = 3; break; }
        case '6': { a = 2; break; }
        case '7': { a = 1; break; }
        case '8': { a = 0; break; }
            
        default: (char)a; break; //kdyz je char = '\n' tak takhle zustane
    }
    return a;
}
