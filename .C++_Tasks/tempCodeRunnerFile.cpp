#include <iostream>
#include <math.h>
#include <cmath>

#include <vector>

using namespace std;

vector<float> data;

void provideInputs() {
    while(true){
        float liczba = 0;
        cout<<"Podaj liczbe: ";
        cin>>liczba;

        data.push_back(liczba);

        string status;
        cout<<"czy chcesz wprowdzic nowa liczbe? ";
        cin>>status;

        if(status == "nie") {
            // break;
            return;
        }
    }
}

main()
{   
    
    cout<<"*   1.Dodawanie           * "<<endl;
    cout<<"*   2.Odejmowanie         * "<<endl;
    cout<<"*   3.Mnozenie            * "<<endl;
    cout<<"*   4.Dzielenie           * "<<endl;
    cout<<"*   5.Pierwiastkowanie    * "<<endl;
    cout<<"*   6.Zamknij kalkulator  * "<<endl;
    printf("*   6.Zamknij kalkulator  * \r\n");

    cout<<"Jaka chcesz wykonac operacje matematyczna?"<<endl;

    
    float w = 0;
    int liczba;
    cin>>liczba;

    provideInputs();

    switch(liczba)
    {
        case 1:
        {
            for(int i = 0; i < data.size(); i++){
                w = w + data[i];
            }

            cout<<"Wynikiem jest : " << w;
            break;
        }
        // tutaj dupa2  nie istnieje
        case 2:
            //w=a-b;
            cout<<"Wynikiem jest : "<<w;
         break;
         case 3:
            //w=a*b;
            cout<<"Wynikiem jest : "<<w;
         break;
         case 4:
            
            //w=a/b;
            cout<<"Wynikiem jest : "<<w;
         break;
         case 5:
            
            //w=pow(a,b);
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