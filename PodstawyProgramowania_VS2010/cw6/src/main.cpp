#include <cstdlib>
#include <iostream>

using namespace std;

double iloraz(double arg1, double arg2, int & czyMozliwe);

int main(int argc, char *argv[])
{
    double a,b;
    double wynik;
    int czyMozliwe;
    
    
    //cout<<"Program oblicza iloraz liczb\nPodaj liczbe a: ";
    //cin>>a;
    //cout<<"Podaj liczbe b: ";
    //cin>>b;
    
    
    a = 22;
    b = 2;
    
    wynik=iloraz(a,b,czyMozliwe);
    if(czyMozliwe==1)
    {
        cout<<"wynik= "<<wynik<<endl; 
    }
    else if(czyMozliwe==0)
    {
        cout<<"Nie mozna dzielic przez 0\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
 
double iloraz(double arg1, double arg2, int & czyMozliwe)
{
    double wynik=0;
    czyMozliwe=1;

	if(arg2==0) czyMozliwe=0;
    if(czyMozliwe==1) wynik=arg1/arg2;

    return wynik;
        
}


