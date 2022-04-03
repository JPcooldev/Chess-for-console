//
//  Chessboard.h
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
//
/*  i,j ∊ {0,1,...,N}
 *  chessboard[i][j] = 0    pole je prazdne
 *  chessboard[i][j] > 0    v poli se nachazi bila figurka
 *  chessboard[i][j] < 0    v poli se nachazi cerna figurka
 *
 * +- 1 (P) pawn
 * +- 2 (R) rook
 * +- 3 (N) knight
 * +- 4 (B) bishop
 * +- 5 (Q) queen
 * +- 6 (K) king
 *
 *
 */


#ifndef Chessboard_h
#define Chessboard_h

extern const int N;

extern int chessboard[8][8];

void showCH();

#endif /* Chessboard_h */
