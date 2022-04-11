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


White::White()
{
    //inicializace WHITE
    WP1.initPawn(6, 0, 1);
    WP2.initPawn(6, 1, 1);
    WP3.initPawn(6, 2, 1);
    WP4.initPawn(6, 3, 1);
    WP5.initPawn(6, 4, 1);
    WP6.initPawn(6, 5, 1);
    WP7.initPawn(6, 6, 1);
    WP8.initPawn(6, 7, 1);
    WR1.initRook(7, 0, 1);
    WR2.initRook(7, 7, 1);
    WN1.initKnight(7, 1, 1);
    WN2.initKnight(7, 6, 1);
    WB1.initBishop(7, 2, 1);
    WB2.initBishop(7, 5, 1);
    WQ.initQueen(5, 3, 1);
    WK.initKing(7, 4, 1);
}

Black::Black()
{
    //inicializace BLACK
    BP1.initPawn(1, 0, -1);
    BP2.initPawn(1, 1, -1);
    BP3.initPawn(1, 2, -1);
    BP4.initPawn(1, 3, -1);
    BP5.initPawn(1, 4, -1);
    BP6.initPawn(1, 5, -1);
    BP7.initPawn(1, 6, -1);
    BP8.initPawn(1, 7, -1);
    BR1.initRook(0, 0, -1);
    BR2.initRook(0, 7, -1);
    BN1.initKnight(0, 1, -1);
    BN2.initKnight(0, 6, -1);
    BB1.initBishop(0, 2, -1);
    BB2.initBishop(0, 5, -1);
    BQ.initQueen(0, 3, -1);
    BK.initKing(0, 4, -1);
}

