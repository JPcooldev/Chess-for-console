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
    WP1.MovePawn(6, 0, 1);
    WP2.MovePawn(6, 1, 1);
    WP3.MovePawn(6, 2, 1);
    WP4.MovePawn(6, 3, 1);
    WP5.MovePawn(6, 4, 1);
    WP6.MovePawn(6, 5, 1);
    WP7.MovePawn(6, 6, 1);
    WP8.MovePawn(6, 7, 1);
    WR1.MoveRook(7, 0, 1);
    WR2.MoveRook(7, 7, 1);
    WN1.MoveKnight(7, 1, 1);
    WN2.MoveKnight(7, 6, 1);
    WB1.MoveBishop(7, 2, 1);
    WB2.MoveBishop(7, 5, 1);
    WQ.MoveQueen(7, 3, 1);
    WK.MoveKing(7, 4, 1);
}

Black::Black()
{
    BP1.MovePawn(1, 0, -1);
    BP2.MovePawn(1, 1, -1);
    BP3.MovePawn(1, 2, -1);
    BP4.MovePawn(1, 3, -1);
    BP5.MovePawn(1, 4, -1);
    BP6.MovePawn(1, 5, -1);
    BP7.MovePawn(1, 6, -1);
    BP8.MovePawn(1, 7, -1);
    BR1.MoveRook(0, 0, -1);
    BR2.MoveRook(0, 7, -1);
    BN1.MoveKnight(0, 1, -1);
    BN2.MoveKnight(0, 6, -1);
    BB1.MoveBishop(0, 2, -1);
    BB2.MoveBishop(0, 5, -1);
    BQ.MoveQueen(0, 3, -1);
    BK.MoveKing(0, 4, -1);
}
