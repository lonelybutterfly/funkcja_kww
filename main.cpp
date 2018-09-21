#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    cout<<"c= "; cin>>c;
    if(a!=0)
    {
        //funkcja kwadratowa
        d=b*b-4*a*c;
        if(d<0) cout<<"Brak miejsc zerowych"<<endl;
        if(d>0)
        {   cout<<"x1= "<<(-b-sqrt(d))/(2*a)<<endl;
            cout<<"x2= "<<(-b+sqrt(d))/(2*a)<<endl;
        }
        if(d==0) cout<<"x1=x2= "<<-b/(2*a)<<endl;
    }
    else
    if(b!=0)
    {
        //funkcja liniowa
        cout<<"Funkcja liniowa"<<endl;
        cout<<"x= "<<-c/b<<endl;
    }
    else
        cout<<"Funkcja stala y= "<<c;
    return 0;
}
