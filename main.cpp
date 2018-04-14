#include <iostream>
#include"plansza.h"

using namespace std;

int main()
{
  //  cout<<"Podaj Wymiar planszy: ";
  //  int wymiar;
    plansza nr1(3);    //JAK TO ZAALOKOWAC



    int k;
    cout<<"Kto zaczyna ?\n1.Kolko\n2.Krzyzyk ";
    cin>>k;
    if(k==2){
    nr1.czyj_ruch=-1;} //NIEBIESKI =-1
    else nr1.czyj_ruch=1;

    nr1.poka();

    do
    {
        nr1.wykonajRuch();

    }
    while(nr1.gameover());

    return 0;
}
