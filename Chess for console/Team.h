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



class Team {
    Pawn P1, P2, P3, P4, P5, P6, P7, P8;
    Rook R1, R2;
    Knight N1, N2;
    Bishop B1, B2;
    Queen Q;
    King K;
    
public:
    Team();
    void initT(int);                    //inicializace
    void optT(int, int);                //kontrola zda hrac saha po figurce sveho tymu a nasledna kontrola, zda zvolil legalni pole pro nasledujici tah
    void moveT(int, int, int, int);     //pohyb
};


#endif /* Teams */
