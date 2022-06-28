#include<iostream>
#include<cmath>

using namespace std;

main()
{   
    int pierwsza, druga;

    cout<<"Podaj wiek jednej z osob: ";
    cin>>pierwsza;
    cout<<"Podaj wiek drugiej z osob: ";
    cin>>druga;



    if (pierwsza >= 100 && druga >= 100)
    {
        cout<<"Obie sa stare jak swiat :)";
    }
    if(pierwsza>druga)
    {
        cout<<"Pierwsza osoba majaca: "<<pierwsza<<"lat, jest starsza.";
    }
    else if (druga>pierwsza)
    {
        cout<<"Druga osoba majaca: "<<druga<<"lat, jest starsza.";
    }
    else
    {
        cout<<"Obie osoby sa w tym samym wieku!";
    }

    return 0;
}