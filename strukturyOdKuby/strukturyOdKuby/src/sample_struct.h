#ifndef __SAMPLE_STRUCT_H__
#define __SAMPLE_STRUCT_H__

#include <string>

//////////////////////////////
// Struktury danych         //
//////////////////////////////

///Prosta struktura niezlinkowana
struct SampleStruct
{
	int ilosc;
	int rozmiar;
	int pozycjaWBibliotece;

	std::string tytul;
	std::string autor;
	std::string ISBN;
};

///Struktura zlinkowana - pojedyncza lista
struct SampleList
{
	std::string nodeName;
	SampleList* next;
};

///Struktura zlinkowana - podwójna lista
struct SampleDoubleList
{
	std::string nodeName;
	SampleDoubleList* next;
	SampleDoubleList* prev;
};

void testStructs();
void debugPrint(SampleStruct*);

/////////////////////////////////////////////////////
// Funkcje - do zaimplementowania i przetestowania //
/////////////////////////////////////////////////////
/*
void sampleListAddNode (SampleList* addToThis, SampleList* addThis);
void sampleListRemoveNode (SampleList* removeThis);
SampleList* sampleListCreateNode ();
int sampleListDeleteAll (SampleList*);
SampleList* sampleListNext (SampleList*);
bool sampleListHasNext (SampleList*);
int sampleListCountNexts (SampleList*);

SampleDoubleList* sampleDoubleListCreateNode ();
void sampleDoubleListAddNode (SampleDoubleList* addToThis, SampleDoubleList* addThis);
void sampleDoubleListRemoveNode (SampleDoubleList* removeThis);
int sampleDoubleListDeleteAll (SampleDoubleList*);
bool sampleDoubleListHasNext (SampleDoubleList*);
bool sampleDoubleListHasPrev (SampleDoubleList*);
SampleDoubleList* sampleDoubleListNext (SampleDoubleList*);
SampleDoubleList* sampleDoubleListPrev (SampleDoubleList*);
SampleDoubleList* sampleDoubleListFirst (SampleDoubleList*);
SampleDoubleList* sampleDoubleLsitLast (SampleDoubleList*);
int sampleDoubleListCount (SampleDoubleList*);
*/
#endif//__SAMPLE_STRUCT_H__
