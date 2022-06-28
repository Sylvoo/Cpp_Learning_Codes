#include<iostream>
#include<math.h>

using namespace std;

main()
{
    int a, b, c, x, p;
    cout<<"Podaj dlugosci ramion trojkata: ";
    cin>>a>>b>>c;

    x=(a+b+c)/2;

    p=sqrt(x*(x-a)*(x-b)*(x-c));

    cout<<"Pole trojakta jest rowne: "<<p<<endl;
    return 0;
}