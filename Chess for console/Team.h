//
//  Team.h
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
//

#ifndef Team_h
#define Team_h

#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"


class White {
public:
    Pawn WP1, WP2, WP3, WP4, WP5, WP6, WP7, WP8;
    Rook WR1, WR2;
    Knight WN1, WN2;
    Bishop WB1, WB2;
    Queen WQ;
    King WK;
    
//public:
    White();
    void OPT();
};

class Black {
    Pawn BP1, BP2, BP3, BP4, BP5, BP6, BP7, BP8;
    Rook BR1, BR2;
    Knight BN1, BN2;
    Bishop BB1, BB2;
    Queen BQ;
    King BK;
    
public:
    Black();
    
};

#endif /* Teams */
