#include <iostream>
#include"plansza.h"
#include <iomanip>
#include <cstdlib>
#include"TicTacToe.h"
#include"fours.h"
using namespace std;

int main()
{
  //  cout<<"Podaj Wymiar planszy: ";
  //  int wymiar;
    int wybor,N;
    int k;

    cout<<"Wybierz gre\n 1. Kolko i Krzyzyk\n 2. Czworki :";
    cin>> wybor;

    if(wybor==2)
    {
        cout<<"\nPodaj rozmiar planszy N: ";

    do
        {
            cin>>N;
        }
        while(N<1);
    }
if(wybor==1){

cout<<"Kto zaczyna ?\n1.Kolko\n2.Krzyzyk ";
cin>>k;}
Tic nr2(k);

switch(wybor){
case 1:

    nr2.poka();
    do
    {
        nr2.wykonajRuch();
    }
    while(nr2.gameover());
    break;
case 2:
    fours nr1(N);
    nr1.poka();
    do
    {
        nr1.wykonajRuch();
    }
    while(nr1.gameover());
    break;
}

    return 0;
}
