#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

int main()
{

int a, b, h, Pole, l, O, p; 

cout<<"WITAJ, aby obliczyc pole oraz obwod Trapezu, podaj dlugosci jego podstaw: ";
cin>>a>>b;
cout<<"Nastepnie podaj wysokosc Trapezu: ";
cin>>h;

Pole=((a+b)/2)*h;
cout<<"Pole tego trapezu to: "<<Pole<<endl;

cout<<"Podaj dlugosci ramion: "<<endl;
cin>>l>>p;

O=a+b+l+p;
cout<<"Obwod jest rowny: "<< O;
    
return 0; 
}
