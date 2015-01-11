#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX 40
struct SampleStruct
{
	int ilosc;
	int rozmiar;
	int pozycjaWBibliotece;

	std::string tytul;
	std::string autor;
	std::string ISBN;
};
void debugPrint(SampleStruct* s);


int main(int argc, char* argv[])
{
	SampleStruct ksiazka1;
	ksiazka1.autor = "Bruce Eckel1";
	ksiazka1.tytul = " 1 Thinking in CPP";
	ksiazka1.ISBN = "1 ABCD";
	ksiazka1.ilosc = 110;
	ksiazka1.rozmiar = 11;
	ksiazka1.pozycjaWBibliotece = 1123;

	SampleStruct ksiazka2;
	ksiazka2.autor = "Bruce Eckel2";
	ksiazka2.tytul = "2 Thinking in CPP";
	ksiazka2.ISBN = "2 ABCD";
	ksiazka2.ilosc = 210;
	ksiazka2.rozmiar = 21;
	ksiazka2.pozycjaWBibliotece = 2123;

	SampleStruct ksiazka3;
	ksiazka3.autor = "Bruce Eckel3";
	ksiazka3.tytul = "3 Thinking in CPP";
	ksiazka3.ISBN = "3 ABCD";
	ksiazka3.ilosc = 310;
	ksiazka3.rozmiar = 31;
	ksiazka3.pozycjaWBibliotece = 3123;

	SampleStruct ksiazka4;
	ksiazka4.autor = "Bruce Eckel4";
	ksiazka4.tytul = "4 Thinking in CPP";
	ksiazka4.ISBN = "4 ABCD";
	ksiazka4.ilosc = 410;
	ksiazka4.rozmiar = 41;
	ksiazka4.pozycjaWBibliotece = 4123;

	SampleStruct ksiazka5;
	ksiazka5.autor = "Bruce Eckel6";
	ksiazka5.tytul = "5 Thinking in CPP";
	ksiazka5.ISBN = "5 ABCD";
	ksiazka5.ilosc = 510;
	ksiazka5.rozmiar = 51;
	ksiazka5.pozycjaWBibliotece = 5123;

	debugPrint(&ksiazka1); 
	debugPrint(&ksiazka2);
	debugPrint(&ksiazka3);
	debugPrint(&ksiazka4);
	debugPrint(&ksiazka5);

   system("PAUSE");
   return EXIT_SUCCESS;
}


	//*****************************************************************
void debugPrint(SampleStruct* s)
{
	cout << "++++++ SampleStruct ++++++" << endl;
	/*cout << "++ autor: " << s->autor << endl;
	cout << "++ tytul: " << s->tytul << endl;
	cout << "++ ISBN: " << s->ISBN << endl;*/
	cout << "++ ilosc: " << s->ilosc << endl;
	cout << "++ rozmiar: " << s->rozmiar << endl;
	cout << "++ pozycja: " << s->pozycjaWBibliotece << endl;
	cout << "++++++" << endl;
}
