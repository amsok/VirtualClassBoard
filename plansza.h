#ifndef PLANSZA_H
#define PLANSZA_H
#include <iostream>
using namespace std;

enum znak{
krzyzyk = -1,
puste_pole,
kolko

};

class plansza{

public:
// plansza(int,int,char,char,int);

virtual void poka()=0;
virtual bool gameover()=0;

//void wykonajRuch4();
virtual void wykonajRuch()=0;
virtual void zmien_Ruch()=0;
virtual bool sprawdz_plansze(int x,int y )=0;


 int rozmiar_planszy;
 int czyj_ruch;
 int x;
 int y;
 int** _plansza;




/*
int sprawdz_lewo( int x, int y,int akumulator );
int sprawdz_prawo( int x, int y,int akumulator );
int sprawdz_gora( int x, int y,int akumulator );
int sprawdz_dol( int x, int y,int akumulator );
int sprawdz_lewoup( int x, int y,int akumulator );
int sprawdz_prawoup( int x, int y,int akumulator );
int sprawdz_lewodown( int x, int y,int akumulator );
int sprawdz_prawodown( int x, int y,int akumulator );
*/
};
#endif
