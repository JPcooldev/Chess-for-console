//
//  Team.cpp
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
/*
 *   BR1 BN1 BB1 BQ  BK  BB2 BN2 BR2        00 01 02 03 04 05 06 07
 *   BP1 BP2 BP3 BP4 BP5 BP6 BP7 BP8        10 11 12 13 14 15 16 17
 *    .   .   .   .   .   .   .   .         20 21 22 23 24 25 26 27
 *    .   .   .   .   .   .   .   .         30 31 32 33 34 35 36 37
 *    .   .   .   .   .   .   .   .         40 41 42 43 44 45 46 47
 *    .   .   .   .   .   .   .   .         50 51 52 53 54 55 56 57
 *   WP1 WP2 WP3 WP4 WP5 WP6 WP7 WP8        60 61 62 63 64 65 66 67
 *   WR1 WN1 WB1 WQ  WK  WB2 WN2 WR2        70 71 72 73 74 75 76 77
 *
 */

#include "Team.h"
#include "Chessboard.h"
#include <cmath>

Team::Team() {
    //nic se nedeje 
}

void Team::initT(int a)
{
    if (a == 1) {
        //inicializace WHITE
        P1.initPawn(6, 0, 11, 1);
        P2.initPawn(6, 1, 12, 1);
        P3.initPawn(6, 2, 13, 1);
        P4.initPawn(6, 3, 14, 1);
        P5.initPawn(6, 4, 15, 1);
        P6.initPawn(6, 5, 16, 1);
        P7.initPawn(6, 6, 17, 1);
        P8.initPawn(6, 7, 18, 1);
        R1.initRook(7, 0, 21, 1);
        R2.initRook(7, 7, 22, 1);
        N1.initKnight(7, 1, 31, 1);
        N2.initKnight(7, 6, 32, 1);
        B1.initBishop(7, 2, 41, 1);
        B2.initBishop(7, 5, 42, 1);
        Q.initQueen(7, 3, 50, 1);
        K.initKing(7, 4, 60, 1);
    }
    if (a == 0) {
        //inicializace BLACK
        P1.initPawn(1, 0, -11, 0);
        P2.initPawn(1, 1, -12, 0);
        P3.initPawn(1, 2, -13, 0);
        P4.initPawn(1, 3, -14, 0);
        P5.initPawn(1, 4, -15, 0);
        P6.initPawn(1, 5, -16, 0);
        P7.initPawn(1, 6, -17, 0);
        P8.initPawn(1, 7, -18, 0);
        R1.initRook(0, 0, -21, 0);
        R2.initRook(0, 7, -22, 0);
        N1.initKnight(0, 1, -31, 0);
        N2.initKnight(0, 6, -32, 0);
        B1.initBishop(0, 2, -41, 0);
        B2.initBishop(0, 5, -42, 0);
        Q.initQueen(0, 3, -50, 0);
        K.initKing(0, 4, -60, 0);
    }
}

//kontrola zda hrac saha po figurce sveho tymu a nasledna kontrola, zda zvolil legalni pole pro nasledujici tah
void Team::optT(int x_, int y_)
{
    int tmp = std::abs(ch[x_][y_]);
    
    switch (tmp) {
        case 11: P1.OptionsPawn(); break;
        case 12: P2.OptionsPawn(); break;
        case 13: P3.OptionsPawn(); break;
        case 14: P4.OptionsPawn(); break;
        case 15: P5.OptionsPawn(); break;
        case 16: P6.OptionsPawn(); break;
        case 17: P7.OptionsPawn(); break;
        case 18: P8.OptionsPawn(); break;
        case 21: R1.OptionsRook(); break;
        case 22: R2.OptionsRook(); break;
        case 31: N1.OptionsKnight(); break;
        case 32: N2.OptionsKnight(); break;
        case 41: B1.OptionsBishop(); break;
        case 42: B2.OptionsBishop(); break;
        case 50: Q.OptionsQueen(); break;
        //case 60: K.OptionsKing(); break;
            
        default:
            break;
    }
}

void Team::moveT(int x0, int y0, int x1, int y1)
{
    int tmp = std::abs(ch[x0][y0]);
    
    switch (tmp) {
        case 11: P1.moveP(x1, y1); break;
        case 12: P2.moveP(x1, y1); break;
        case 13: P3.moveP(x1, y1); break;
        case 14: P4.moveP(x1, y1); break;
        case 15: P5.moveP(x1, y1); break;
        case 16: P6.moveP(x1, y1); break;
        case 17: P7.moveP(x1, y1); break;
        case 18: P8.moveP(x1, y1); break;
        case 21: R1.moveR(x1, y1); break;
        case 22: R2.moveR(x1, y1); break;
        case 31: N1.moveN(x1, y1); break;
        case 32: N2.moveN(x1, y1); break;
        case 41: B1.moveB(x1, y1); break;
        case 42: B2.moveB(x1, y1); break;
        case 50: Q.moveQ(x1, y1); break;
        //case 60: K.OptionsKing(); break;
            
        default:
            break;
    }
}
 
