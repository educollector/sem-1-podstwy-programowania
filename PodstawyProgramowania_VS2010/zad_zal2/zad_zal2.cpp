#include <cstdlib>
#include <iostream>
#include <ctime>
#include <algorithm>
#include "Ciagi.h"

using namespace std;
/*Program podaje oddzielnie sumê liczb parzystych i nieparzystych z ci¹gu*/
int main(int argc, char *argv[])
{
	int n;
	bool czyChcesz;
	int wybor; //wybor sposobu generowania danych w instrukcji switch
   
	cout<<"Program sprawdza:\n-czy suma elemetow nieparzystych jest <=100\n-podaje najmniejszy dodatni element ciagu\n\nIstnieje mozliwosc wyboru sposobu generowania liczb ciagu.\n\n";
	
	do
	{
		cout<<"Podaj liczbe elementow ciagu: ";
		cin>>n;
		int* ciag; //deklaracja tworzenia tablicy ,wskaznik na pierwszy element tablicy
		      
		//----------------wypelnianie tablicy liczbami
		
		cout<<"Wybierz sposob generowania elementow ciagu:\n";
		do
		{
            cout<<"automatyczne-1, pseudolosowe - 2; klawiatura-3\n";
            cin>>wybor;
        }while( wybor!=1 && wybor!=2 && wybor!=3 ); //zabezpiecza przed wpisaniem innej wartosci niz 1,2, lub 3
        
		switch(wybor)
		{
			case 1: //automatyczne generowanie ci¹gu
			{
				ciag = automatycznyGenerator(n, 100);
				break;
			}
			case 2://generator liczb pseudolosowych z podanego zakrsu
			{
				int a1;
				int an;
		
				do  //sprawdzenie, czy wprowadzono najpierw mniejsza a potem wieksza wartosc z zakresu
				{ 	
					cout<<"Podaj zakres ciagu, pamietaj -dolna wartosc musi byc mniejsza od gornej\n";
					cout<<"Podaj dolny zakres ciagu:\n";
					cin>>a1;
					cout<<"Podaj gorny zakres ciagu:\n";
					cin>>an;
				
				}while(a1>=an);

				ciag = generatorZakres(n, a1, an);
				break;   
			}
			case 3://wpisywanie z klawiatury
				ciag = new int[n];

				for( int i=0; i<n; i++) 
				{
					cout<<"Wpisz elemnet o indeksie "<<i+1<<" :";
					cin>>ciag[i];
				}
				break;
		}
		cout<<"\nwypisuje elementy ciagu\n\n";
			for(int i =0; i<n;i++)
			{
				cout<<"element nr "<<i+1<<":\t"<<ciag[i]<<endl;
			}
			cout<<"\nkoniec wypisywania\n\n";
		 
		//-------------------najmniejszy element ci¹gu
		int min =  numeric_limits<int>::max(); //max wartosc jaka zmiesi sie w tblicy typu int
		int numerElementuMin=0;
		for(int i=0;i<n;i++)
		{
			if((min>ciag[i])&&(ciag[i]>0))
			{
				min=ciag[i];
				numerElementuMin=i;
			}
		}    
		
		if(min = numeric_limits<int>::max()) //przypadek, gdy wszystkie elementy sa ujemne
            cout<<"Wartosc minimalnego DODATNIEGO elementu ciagu to:\n\tCiag ma tylko elementy ujemne.";
        else
        {    
    		cout<<"Wartosc minimalnego DODATNIEGO elementu ciagu to: "<<min<<endl
    			<<"Jest to element nr: "<<numerElementuMin+1<<" ciagu. (a w tablicy ciag["<<numerElementuMin<<"])"<<endl<<endl<<endl;
        }
		//-----czy suma el. nieparzystych jest nie wieksza od 100
		cout<<"\n\nWartosci nieparzystych elementow ciagu:\n";
		int sumOdd=0;
		
		for(int i=0;i<n;i+=2)   //zlicza wartosci el. nieparzystych
		{
			sumOdd+=ciag[i];
			cout<<"element nr "<<i+1<<" :  "<<ciag[i]<<endl;
		}

		if(sumOdd<=100)
			cout<<"Suma elementow nieparzystych = "<<sumOdd<<" i jest <=100\n\n";
		else if (sumOdd>100)
			cout<<"Suma elementow nieparzystych = "<<sumOdd<<" i jest >100\n\n";
		//--------------------------------------------------------------------
		delete[] ciag; //kasowanie tablicy dynamicznej

		cout<<"Czy chcesz powtorzyc obliczenia dla innego ciagu?\n\ttak - wcisnij 1\n\tnie - wcisnij 0\n";
		cin>>czyChcesz;

	}while(czyChcesz=1);

	system("PAUSE");
	return EXIT_SUCCESS;
}
