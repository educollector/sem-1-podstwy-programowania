#include "Ciagi.h"
#include <cstdlib> //do rand()
#include <ctime>
#include <iostream>

using namespace std;

int* automatycznyGenerator(int n, const int max_sum_odd)
{
	cout<<"automatycznyGenerator()"<<endl;
	srand(time(0));//inicjalizacja generatora liczb pseudolosowych

	int* ciag = new int[n];
	int sumOdd=0;
	int a1=10;
	int an=100;
	
	for(int i=0;i<n;i++)
	{
		//----------i+1, bo dla i=0 mamy element 1 ciagu czyli nieparzysty
		if(isEven(i+1)) //if(((i+1) %2)==0)
		{
			//---------generator elementow parzystych
			ciag[i]=a1+(rand()%(an-a1));
			//cout<<"parzysty: "<<ciag[i]<<endl;
		}
		else //if(isOdd(i+1)) //if(((i+1)%2)==1)
		{
			//------------generator elementow NIEparzystych ktorych suma jest niewieksza niz 100
			ciag[i] = rand()%(max_sum_odd-sumOdd+1); //+1 chroni przed dzieleniem przeez 0 --- %1 to zawsze 0
			sumOdd+= ciag[i];

			//cout<<ciag[i]<<endl; //-----------wypisywanie sumy wartosci nieparzystych elementow ciagu
		}
		//cout<<"sumodd: "<<sumOdd<<endl;
	}

	return ciag;
}

bool isEven(int i)
{
	return i%2 == 0;
}

int* generatorZakres(int n, int a1, int an)
{
	int* ciag = new int[n];

	for(int i=0; i<n;i++)
	{
		ciag[i]=a1+(rand()%(an-a1));
		//5cout<<ciag[i]<<endl;
	}   
	return ciag;
}