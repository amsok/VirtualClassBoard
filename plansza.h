#include <iostream>
using namespace std;

enum znak{
krzyzyk = -1,
puste_pole,
kolko

};

class plansza{

public:
plansza(int,int,char,char,int);

void poka();
bool gameover();

void wykonajRuch4();
void wykonajRuch();
void zmien_Ruch();


private:
int rozmiar_planszy;
int czyj_ruch;
int x;
int y;
int** _plansza;
int _warunekwygranej;
char _znak1;
char _znak2;

bool sprawdz_plansze(int x,int y );
int sprawdz_lewo( int x, int y,int akumulator );
int sprawdz_prawo( int x, int y,int akumulator );
int sprawdz_gora( int x, int y,int akumulator );
int sprawdz_dol( int x, int y,int akumulator );
int sprawdz_lewoup( int x, int y,int akumulator );
int sprawdz_prawoup( int x, int y,int akumulator );
int sprawdz_lewodown( int x, int y,int akumulator );
int sprawdz_prawodown( int x, int y,int akumulator );
};
