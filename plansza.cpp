#include <iostream>
#include <iomanip>
#include"plansza.h"
#include <cstdlib>

using namespace std;

plansza::plansza(int N,int b, char q,char w,int wybor):_warunekwygranej(b-1), _znak1(q),_znak2(w)
{
rozmiar_planszy=N;
_plansza= new int*[N];
for(int i=0;i<rozmiar_planszy;i++){
    _plansza[i]= new int[rozmiar_planszy];
}
for(int j=0;j<rozmiar_planszy;j++){
for(int i=0;i<rozmiar_planszy;i++){
    _plansza[j][i]=0;
}}
int k;
    if(wybor==1){
    cout<<"Kto zaczyna ?\n1.Kolko\n2.Krzyzyk ";
    cin>>k;
    if(k==2){
    czyj_ruch=-1;} //NIEBIESKI =-1
    else czyj_ruch=1;
    }
    else{
        cout<<"Kto zaczyna ?\n1.Niebieski\n2.Czerwony ";
    cin>>k;
    if(k==2){
    czyj_ruch=-1;} //NIEBIESKI =-1
    else czyj_ruch=1;

}}

bool plansza::gameover(){
if(sprawdz_plansze(x,y)==0){return 1;}
else{return 0;}

}

bool plansza::sprawdz_plansze(int x,int y ){

if((sprawdz_lewo(x,y,0)+sprawdz_prawo(x,y,0))>_warunekwygranej){
    cout<<endl<<"WYGRANA";
    return 1;
}

if(sprawdz_dol(x,y,0)+sprawdz_gora(x,y,0)>_warunekwygranej){
    cout<<endl<<"WYGRANA";
    return 1;}

if((sprawdz_lewoup(x,y,0)+sprawdz_prawodown(x,y,0))>_warunekwygranej){   // w lewo w gore i w prawo w dol
   cout<<endl<<"WYGRANA";
   return 1;}

if((sprawdz_lewodown(x,y,0)+sprawdz_prawoup(x,y,0))>_warunekwygranej){
    cout<<endl<<"WYGRANA";
    return 1;}
else return 0;
}


plansza::sprawdz_lewo( int x, int y,int akumulator ){
   // cout<<endl<<x<<endl<<akumulator;
if(x==0){
    return akumulator;
}
if(_plansza[x-1][y]==_plansza[x][y])
    return sprawdz_lewo(x-1,y,akumulator+1);

else{
    return akumulator;}
}

plansza::sprawdz_prawo( int x, int y,int akumulator ){
    //    cout<<endl<<x<<endl<<akumulator;
if(x==rozmiar_planszy-1)
    return akumulator;


if(_plansza[x+1][y]==_plansza[x][y])
    return sprawdz_prawo(x+1,y,akumulator+1);

else
    return akumulator;
}

plansza::sprawdz_dol( int x, int y,int akumulator ){

if(y==0)

    return akumulator;



if(_plansza[x][y-1]==_plansza[x][y])
    return sprawdz_dol(x,y-1,akumulator+1);

else
    return akumulator;
}
plansza::sprawdz_gora( int x, int y,int akumulator ){

if(y==rozmiar_planszy-1)

    return akumulator;



if(_plansza[x][y+1]==_plansza[x][y])
    return sprawdz_gora(x,y+1,akumulator+1);

else
    return akumulator;
}

plansza::sprawdz_lewodown( int x, int y,int akumulator ){
    //    cout<<endl<<x<<endl<<akumulator;
if(x==0||y==rozmiar_planszy-1)
    return akumulator;


if(_plansza[x-1][y+1]==_plansza[x][y])
    return sprawdz_lewodown(x-1,y+1,akumulator+1);

else
    return akumulator;
}

plansza::sprawdz_lewoup( int x, int y,int akumulator ){
      //  cout<<endl<<x<<endl<<y<<endl<<akumulator;
if(x==0||y==0)
    return akumulator;


if(_plansza[x-1][y-1]==_plansza[x][y])
    return sprawdz_lewoup(x-1,y-1,akumulator+1);

else
    return akumulator;
}

plansza::sprawdz_prawodown( int x, int y,int akumulator ){
    //    cout<<endl<<x<<endl<<akumulator;
if(x==rozmiar_planszy-1||y==rozmiar_planszy-1)
    return akumulator;


if(_plansza[x+1][y+1]==_plansza[x][y])
    return sprawdz_prawodown(x+1,y+1,akumulator+1);

else
    return akumulator;
}

plansza::sprawdz_prawoup( int x, int y,int akumulator ){
    //    cout<<endl<<x<<endl<<akumulator;
if(x==rozmiar_planszy-1||y==0)
    return akumulator;


if(_plansza[x+1][y-1]==_plansza[x][y])
    return sprawdz_prawoup(x+1,y-1,akumulator+1);

else
    return akumulator;
}

void plansza::zmien_Ruch(){
    if(czyj_ruch==kolko){
        czyj_ruch=krzyzyk;
        cout<<endl<<" Teraz gracz: "<<_znak1;}
    else{czyj_ruch=kolko;
        cout<<endl<<" Teraz gracz: "<<_znak2;}
}

void plansza::wykonajRuch(){

cout<<endl<<"Podaj wspolrzedne punktu: ";
cin>>x;
cin>>y;
x--;
y--;
if(_plansza[x][y]!=0)
{
    zmien_Ruch();
}
else {_plansza[x][y]=czyj_ruch;}

poka();
zmien_Ruch();
}
void plansza::wykonajRuch4(){

cout<<endl<<"Podaj wspolrzedne punktu: ";
cin>>x;
x--;
int i;
for(i=0;i<rozmiar_planszy;i++){
    if(_plansza[x][i]==0){
        _plansza[x][i]=czyj_ruch;
        break;
    }
}
y=i;
poka();
zmien_Ruch();
}

void plansza::poka(){
system( "cls" );
for(int j=0;j<rozmiar_planszy;j++){

for(int i=0;i<rozmiar_planszy;i++){

    if(_plansza[i][rozmiar_planszy-1-j]==krzyzyk)
    cout<<setw(3)<<_znak1;
    else if(_plansza[i][rozmiar_planszy-1-j]==kolko)
    cout<<setw(3)<<_znak2;
    else if(_plansza[i][rozmiar_planszy-1-j]==puste_pole)
    cout<<setw(3)<<" ";
}

    cout<<setw(5)<<rozmiar_planszy-j<<endl;
}
cout<<endl;
for(int i=1;i<=rozmiar_planszy;i++){
      cout<<setw(3)<<i;
}}
