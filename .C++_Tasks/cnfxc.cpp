#include<iostream>
#include<math.h>

using namespace std;

class Triangle {
    public:
    float a;
    float b;
    float c;

    void provideInputs(){
        cout<<"Podaj dlugosci ramion trojkata: ";
        cin>>a>>b>>c;
    }

    float calculateArea() 
    {
        float x = (a+b+c)/2;
        float wynik = sqrt(x*(x-a)*(x-b)*(x-c));
        return wynik;
    }
};

void displayResult(float result){
    cout<<"Pole trojakta jest rowne: "<< result << endl;
}

main()
{

    Triangle triangle, triangle2, triangle3;
    
    triangle.provideInputs();
    float result = triangle.calculateArea();
    displayResult(result);

    return 0;
}