#include <iostream>
#include"plansza.h"

using namespace std;

int main()
{
  //  cout<<"Podaj Wymiar planszy: ";
  //  int wymiar;
    int wybor,N=3,X=2;
    char a,b;
    cout<<"Wybierz gre\n 1. Kolko i Krzyzyk\n 2. Czworki :";
    cin>> wybor;

    if(wybor==2){
        cout<<"\nPodaj rozmiar planszy N: ";
        X=3;
    do{
            cin>>N;
        }while(N<1);
    }

    if(wybor==1){
                a='X';
                b='O';
                }
    else{
        a='C';
        b='N';
        }

plansza nr1(N,X,a,b,wybor);
nr1.poka();

if(wybor==1){
    do{
        nr1.wykonajRuch();

    }
    while(nr1.gameover());
}
else{
    do{
        nr1.wykonajRuch4();

    }
    while(nr1.gameover());



}
    return 0;
}
