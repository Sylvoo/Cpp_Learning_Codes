#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

main()
{
    int x, p;
    cout<<"Podaj liczbe:";
    cin>>x;

    // p=cbrt(x);
    p=pow(x,1/3.0);

    cout<<"Wynik to: "<<p;

    return 0;
}