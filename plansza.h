#include <iostream>
using namespace std;



enum znak{
krzyzyk = -1,
puste_pole,
kolko

};


class plansza{

public:
plansza(int N);
int rozmiar_planszy;
int czyj_ruch;
void poka();
bool gameover();
bool sprawdz_plansze(int x,int y );
int sprawdz_lewo( int x, int y,int akumulator );
int sprawdz_prawo( int x, int y,int akumulator );

int sprawdz_dol( int x, int y,int akumulator );
int sprawdz_lewoup( int x, int y,int akumulator );
int sprawdz_prawoup( int x, int y,int akumulator );
int sprawdz_lewodown( int x, int y,int akumulator );
int sprawdz_prawodown( int x, int y,int akumulator );




void wykonajRuch();
void zmien_Ruch();


private:
int x;
int y;
int** _plansza;
};
