//
//  Chessboard.h
//  Chess for console
//
//  Created by Jakub Prokop on 02.04.2022.
//
/*  i,j ∊ {0,1,...,N}
 *  ch[i][j] = 0    pole je prazdne
 *  ch[i][j] > 0    v poli se nachazi bila figurka
 *  ch[i][j] < 0    v poli se nachazi cerna figurka
 *
 * +- 11-18 (P) pawn
 * +- 21-22 (R) rook
 * +- 31-32 (N) knight
 * +- 41-42 (B) bishop
 * +- 50 (Q) queen
 * +- 60 (K) king
 *
 *
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


#ifndef Chessboard_h
#define Chessboard_h

#include <vector>

#define RESET       "\033[0m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"

extern const int N;

extern int ch[8][8];

//vypis sachovnice
void showCH();

//kontrola lokace na sachovnici
bool controlCH();


extern std::vector<int> v1;
//ulozeni options pro tah dane figurky
void storeOptions(int x, int y);

//zobrazeni moznosti a vynulovani vektoru v1
void showOpt();

//void rotateCH(); //otoci hraci desku

int char_on_int(char z);

#endif /* Chessboard_h */
