#ifndef TicTacToe_h
#define TicTacToe_h
#include "plansza.h"
#include <iostream>
using namespace std;


class Tic:public plansza{

public:
Tic(int);

void poka();
bool gameover();

void wykonajRuch();
void zmien_Ruch();
bool sprawdz_plansze(int x,int y );

private:



int _warunekwygranej;
int sprawdz_lewo( int x, int y,int akumulator );
int sprawdz_prawo( int x, int y,int akumulator );
int sprawdz_gora( int x, int y,int akumulator );
int sprawdz_dol( int x, int y,int akumulator );
int sprawdz_lewoup( int x, int y,int akumulator );
int sprawdz_prawoup( int x, int y,int akumulator );
int sprawdz_lewodown( int x, int y,int akumulator );
int sprawdz_prawodown( int x, int y,int akumulator );
};
#endif
