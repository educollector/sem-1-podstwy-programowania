#include "sample_struct.h"
#include <iostream>

using namespace std;

void testStructs()
{
	SampleStruct ksiazka;
	ksiazka.autor = "Bruce Eckel";
	ksiazka.tytul = "Thinking in CPP";
	ksiazka.ISBN = "ABCD";
	ksiazka.ilosc = 10;
	ksiazka.rozmiar = 1;
	ksiazka.pozycjaWBibliotece = 123;

	debugPrint(&ksiazka);

	SampleStruct* pointerDoKsiazki = &ksiazka;

	cout << "jak dziala pointer do struktury>>" << endl;

	pointerDoKsiazki->ilosc = 123;

	cout << "autor: " << pointerDoKsiazki->autor << endl;
	cout << "tytul: " << pointerDoKsiazki->tytul << endl;
}

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