#include <iostream>
#include <stdio.h>
#define MAXTYT 40
#define MAXAUT 40
#define MAX 2 //makx liczba ksi¹zek

struct Book
{
	int ilosc;
	int rozmiar;
	int pozycjaWBibliotece;

	char tytul [MAXTYT];
	char autor [MAXAUT];
	char ISBN;
};

using namespace std;

int main(int argc, char argv[])

{
	Book bibl[MAX]; // tablica struktur typu Book
	int licznik = 0;
	int answer;
	int i=0;

	/*cout<<"Jesli chcesz wprowadzic ksiazke wcisnij 1, jesli nie - 0"<<endl;
	cin>>answer;
	if (answer==0) cout<<"Ok, konczymy wprowadzanie ksiazek"<<endl;
	else
	{*/
		while (licznik < MAX && gets(bibl[licznik].tytul) !=NULL /*&& bibl[licznik].tytul[0] != '\0'*/)
		{
			cout<<"Podaj autora ";
			gets(bibl[licznik].autor);
			cout<<"Podaj ilosc ";
			scanf ("%d", &bibl[licznik++].ilosc);

				while (getchar() != '\n')
					continue; /*czysci wiersz wejsciowy*/
				//if(licznik < MAX)
				//cout<<"Podaj kolejnego autora "<<endl;
		}
	

	cout<<"Twoje ksiazki:"<<endl;
	for(i =0; i<licznik; i++)
	{	
		cout<<"Autor:"<<bibl[i].autor<<'\t'<<"Ilosc:"<<bibl[i].ilosc<<endl;
	}
	 
   system("PAUSE");
    return EXIT_SUCCESS;
}


/*0{
			Book ksiazka;//deklaracja ksiazka jako zmiennej typy Book
				ksiazka.autor = "Bruce Eckel";
				ksiazka.tytul = "Thinking in CPP";
				ksiazka.ISBN = "ABCD";
				ksiazka.ilosc = 10;
				ksiazka.rozmiar = 1;
				ksiazka.pozycjaWBibliotece = 123;

				printf("ilosc egzemplarzy : %d\n", ksiazka.ilosc);
		}
		*/