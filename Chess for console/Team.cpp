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

Team::Team() {
    //nic se nedeje 
}

void Team::initT(int a)
{
    if (a == 1) {
        //inicializace WHITE
        P1.initPawn(6, 0, 1);
        P2.initPawn(6, 1, 1);
        P3.initPawn(6, 2, 1);
        P4.initPawn(6, 3, 1);
        P5.initPawn(6, 4, 1);
        P6.initPawn(6, 5, 1);
        P7.initPawn(6, 6, 1);
        P8.initPawn(6, 7, 1);
        R1.initRook(7, 0, 1);
        R2.initRook(7, 7, 1);
        N1.initKnight(7, 1, 1);
        N2.initKnight(7, 6, 1);
        B1.initBishop(7, 2, 1);
        B2.initBishop(7, 5, 1);
        Q.initQueen(7, 3, 1);
        K.initKing(7, 4, 1);
    }
    if (a == -1) {
        //inicializace BLACK
        P1.initPawn(1, 0, -1);
        P2.initPawn(1, 1, -1);
        P3.initPawn(1, 2, -1);
        P4.initPawn(1, 3, -1);
        P5.initPawn(1, 4, -1);
        P6.initPawn(1, 5, -1);
        P7.initPawn(1, 6, -1);
        P8.initPawn(1, 7, -1);
        R1.initRook(0, 0, -1);
        R2.initRook(0, 7, -1);
        N1.initKnight(0, 1, -1);
        N2.initKnight(0, 6, -1);
        B1.initBishop(0, 2, -1);
        B2.initBishop(0, 5, -1);
        Q.initQueen(0, 3, -1);
        K.initKing(0, 4, -1);
    }
}
