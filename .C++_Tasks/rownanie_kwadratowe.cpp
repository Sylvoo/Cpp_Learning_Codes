#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;




main()
{
    double a, b, c, x, x1, x2, delta, Pdelta;

    cout<<"Podaj wspolczynnik a: ";
    cin>> a;
    cout<<"Podaj wspolczynnik b: ";
    cin>> b;
    cout<<"Podaj wspolczynnik c: ";
    cin>> c;
    if(a!=0)
    {
        cout<<"Rownanie kwadratowe jest w postaci: "<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
    }
    else
    {
        cout<<"To nie jest funkcja kwadratowa, a musi byc rozne od 0!!"<<endl;
        cout<<"Jest to funkcja liniowa o wzorze: "<<b<<"x+"<<c<<"=0"<<endl;
    }

    delta=(b*b)-(4*a*c);
    cout<< delta<<endl;
    
    Pdelta=sqrt(delta);
    cout<< Pdelta<<endl;

    if(delta<0)
    {
        cout<<"Delta jest ujemna, to rownanie nie ma rozwiazan!";
    }
    else if (delta==0)
    {
        x=(-b)/(2*a);
        cout<<"Delta jest rowna zero, wiec to rownanie ma jedno rozwiazenie rowne: "<<x;
    }
    else
    {
        x1=(-b - Pdelta)/(2*a);
        x2=(-b + Pdelta)/(2*a);
        cout<<"Delta jest dodatnia, wiec to rownanie ma dwa rozwiazania rowne: "<<x1<<" oraz "<<x2;
    }

    /*
    cout<<a<<b<<c;
    
    int y=0;
    y=a*x+x+b*x+c;
    return y;

    cout<<"Rozwiazanie tego rownania to: "<<y<<endl;
    */

    return 0;
}