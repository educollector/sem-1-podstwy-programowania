#include <cstdlib>
#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

bool isOdd(int);
bool isEven(int);

int main(int argc, char *argv[])
{
	const int ODD_MAX_SUM = 100; //maksymalna suma wartosci elementow nieparzystych

	int a1=-100;  //dolna granica generowanych liczb
	int an=1000; //gorna granica generowanych liczb
	int n=0;  //Liczba elementow
	int choice;
	int* ciag = NULL;// = new int[n];

		
	cout<<"Chcesz wygenerowac ciag ktory: \n\tma nie wiecej niz 100 elementow nieparzystych - wcosnij 0\n\tma sume wartosci elementow nieparzystych NIEwieksza od 100 - wcisnij 1\n"; 
	cin>>choice;

	if(choice==0) //ciag ktory ma nie wiecej niz 100 elementow nieparzystych
	{
		n=(rand()%201); //n-liczba elementow ciagu, nie wiecej niz 200
		ciag = new int[n];

		for(int i=0;i<n;i++)
		{ 
			ciag[i]=a1+(rand()%(an-a1));//generator elementow
			cout<<ciag[i]<<endl;
		}
	}
	else if(choice==1)//ciag ktory ma sume wartosci elementow nieparzystych NIEwieksza od 100
	{ 
		cout<<"Podaj liczbe elementow ciagu\n";
		cin>>n;
		cout<<endl;
		ciag = new int[n];
		int sumOdd=0;
		for(int i=0;i<n;i++)
		{
			//i+1, bo dla i=0 mamy element 1 ciagu czyli nieparzysty
			if(isEven(i+1)) //if(((i+1) %2)==0)
			{
				//generator elementow parzystych
				ciag[i]=a1+(rand()%(an-a1));
				cout<<"parzysty: "<<ciag[i]<<endl;
			}
			else //if(isOdd(i+1)) //if(((i+1)%2)==1)
			{
				//generator elementow NIEparzystych ktorych suma jest niewieksza niz 100
				ciag[i] = rand()%(ODD_MAX_SUM-sumOdd+1); //+1 chroni przed dzieleniem przeez 0 --- %1 to zawsze 0
				sumOdd+= ciag[i];

				cout<<ciag[i]<<endl; //wypisywanie sumy wartosci nieparzystych elementow ciagu
				
			}
			cout<<"sumodd: "<<sumOdd<<endl;
		}
	} 
	
	delete[] ciag; 
	system("pause");
    return 0;
}

bool isOdd(int i)
{
	return i%2 == 1;
}

bool isEven(int i)
{
	return i%2 == 0;
}
