#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

main()
{   
    
    cout<<"*   1.Dodawanie           * "<<endl;
    cout<<"*   2.Odejmowanie         * "<<endl;
    cout<<"*   3.Mnozenie            * "<<endl;
    cout<<"*   4.Dzielenie           * "<<endl;
    cout<<"*   5.Pierwiastkowanie    * "<<endl;
    cout<<"*   6.Zamknij kalkulator  * "<<endl;

    cout<<"Jaka chcesz wykonac operacje matematyczna?"<<endl;

    float a, b, w;
    int liczba;

    cin>>liczba;

    switch(liczba)
    {
        case 1:
            cout<<"Podaj pierwsza liczbe: ";
            cin>>a;
            cout<<"Podaj druga liczbe: ";
            cin>>b;
            w=a+b;

            cout<<"Wynikiem jest : "<<w;
        break;
        case 2:
            cout<<"Podaj pierwsza liczbe: ";
            cin>>a;
            cout<<"Podaj druga liczbe: ";
            cin>>b;
            w=a-b;
            cout<<"Wynikiem jest : "<<w;
         break;
         case 3:
            cout<<"Podaj pierwsza liczbe: ";
            cin>>a;
            cout<<"Podaj druga liczbe: ";
            cin>>b;
            w=a*b;
            cout<<"Wynikiem jest : "<<w;
         break;
         case 4:
            cout<<"Podaj pierwsza liczbe: ";
            cin>>a;
            cout<<"Podaj druga liczbe: ";
            cin>>b;
            w=a/b;
            cout<<"Wynikiem jest : "<<w;
         break;
         case 5:
            cout<<"Podaj liczbe ktora chcesz spotegowac: ";
            cin>>a;
            cout<<"Podaj stopien potegi: ";
            cin>>b;
            w=pow(a,b);
            cout<<"Wynikiem jest : "<<w;
         break;
         case 6:
            cout<<"Zegnaj";
         break;
         default:
         cout<<"Miales jedno zadanie...";
         break;
    }

    return 0;
}