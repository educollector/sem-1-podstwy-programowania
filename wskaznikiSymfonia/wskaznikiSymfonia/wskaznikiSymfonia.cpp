#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	int *wi;
	double *wd;
	int tabint[10]={1,2,3,4,5,6,7,8,9};		//1
	double tabdbl[10];						//2
	//ustawianie wskaznika
	wd=&tabdbl[0];					//3
	//zaladowanie tablicy double wartosciami poczatkowymi-----
	for(int i = 0; i<10; i++)
	{
		*(wd++)=i/10.0;		//wpis wartosci do tablicy double		//4
	}
	cout<<"Tresc tablic na poczatku\n";		
	wi=tabint;								//5
	wd=tabdbl;		
	for(int k=0; k<10; k++)
	{
		cout<<k<<")\t"<<*wi<<"\t\t\t\t"
			<<*wd<<endl;					//6
		wi++;
		wd++;								//7
	}
	//nowe ustawienie wskazników---------
	wi=&tabint[5];							//8
	wd=tabdbl+2;		//czyli wd=&tabl[2] //9

	//wpis do tablic kilku nowych wartosci-------------
	for(int m=0; m<4; m++)
	{
		*(wi++)=-222;
		*(wd++)=-777.5;						//10
	}
	cout<<"Tres tablic po wstawieniu nowch wartosci: "<<endl;
	wi=tabint;
	wd=tabdbl;
	for(int p=0; p<10; p++)
	{
		cout<<"tabint["<<p<<"]= "
			<<*(wi++)
			<<" \t\ttabdbl["<<p<<"]= "
			<<*(wd++)
			<<endl;
	}



    system("PAUSE");
    return EXIT_SUCCESS;
}


/*
str 225
	int zmienna = 8, drugi=4;
	int*wskaznik;
	wskaznik = &zmienna;
	//wypis na ekran
	cout<<"zmienna= "<<zmienna<<endl<<"a odczytana ze wskaznika = "<<*wskaznik<<endl;
	zmienna=10;
	cout<<"zmienna= "<<zmienna<<endl<<"a odczytana ze wskaznika = "<<*wskaznik<<endl;
	*wskaznik=200;
	cout<<"zmienna= "<<zmienna<<endl<<"a odczytana ze wskaznika = "<<*wskaznik<<endl;
	wskaznik=&drugi;
	cout<<"zmienna= "<<zmienna<<endl<<"a odczytana ze wskaznika = "<<*wskaznik<<endl;
	
str 234
	int ti[6];
	double td[6];
	int*wi;
	double*wd;
		wi=&ti[0];
		wd=td;
		cout<<"Oto jak przy inkrementacji wskaznikow zmieniaja sie ukryte w nich adresy: "<<endl;
		for(int i=0; i<6; i++, wi++, wd++)
		{
			cout<<"i= "<<i<<") wi= "<<reinterpret_cast<unsigned int>(wi)<<", wd= "<<reinterpret_cast<unsigned int>(wd)<<endl;
		}
*/