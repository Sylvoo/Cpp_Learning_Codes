#include<math.h>
#include <bits/stdc++.h>

using namespace std;

int NWD(int a, int b)
{
    int pom;
    
	while(b!=0)
    {
		pom = b;
		b = a%b;
		a = pom;	
	}
	
    return a;
}
 
int main()
{
    int a, b;

    cout<<"Podaj liczby dla ktorych szukane jest NWD:"<<endl;
    cin>>a>>b;

    cout<<NWD(a,b)<<endl;

    return 0;
}