#include "sample_struct.h"

struct SampleStruct
{
	int ilosc;
	int rozmiar;
	int pozycjaWBibliotece;

	std::string tytul;
	std::string autor;
	std::string ISBN;
};


int main(int argc, char* argv[])
{
	SampleStruct ksiazka1;
	ksiazka.autor = "Bruce Eckel1";
	ksiazka.tytul = " 1 Thinking in CPP";
	ksiazka.ISBN = "1 ABCD";
	ksiazka.ilosc = 110;
	ksiazka.rozmiar = 11;
	ksiazka.pozycjaWBibliotece = 1123;

	SampleStruct ksiazka2;
	ksiazka.autor = "Bruce Eckel2";
	ksiazka.tytul = "2 Thinking in CPP";
	ksiazka.ISBN = "2 ABCD";
	ksiazka.ilosc = 210;
	ksiazka.rozmiar = 21;
	ksiazka.pozycjaWBibliotece = 2123;

	SampleStruct ksiazka3;
	ksiazka.autor = "Bruce Eckel3";
	ksiazka.tytul = "3 Thinking in CPP";
	ksiazka.ISBN = "3 ABCD";
	ksiazka.ilosc = 310;
	ksiazka.rozmiar = 31;
	ksiazka.pozycjaWBibliotece = 3123;

	SampleStruct ksiazka4;
	ksiazka.autor = "Bruce Eckel4";
	ksiazka.tytul = "4 Thinking in CPP";
	ksiazka.ISBN = "4 ABCD";
	ksiazka.ilosc = 410;
	ksiazka.rozmiar = 41;
	ksiazka.pozycjaWBibliotece = 4123;

	SampleStruct ksiazka5;
	ksiazka.autor = "Bruce Eckel6";
	ksiazka.tytul = "5 Thinking in CPP";
	ksiazka.ISBN = "5 ABCD";
	ksiazka.ilosc = 510;
	ksiazka.rozmiar = 51;
	ksiazka.pozycjaWBibliotece = 5123;
	//*****************************************************************
	void debugPrint(SampleStruct* s)
{
	cout << "++++++ SampleStruct ++++++" << endl;
	cout << "++ autor: " << s->autor << endl;
	cout << "++ tytul: " << s->tytul << endl;
	cout << "++ ISBN: " << s->ISBN << endl;
	cout << "++ ilosc: " << s->ilosc << endl;
	cout << "++ rozmiar: " << s->rozmiar << endl;
	cout << "++ pozycja: " << s->pozycjaWBibliotece << endl;
	cout << "++++++" << endl;
}

	 
    system("PAUSE");
    return EXIT_SUCCESS;
}