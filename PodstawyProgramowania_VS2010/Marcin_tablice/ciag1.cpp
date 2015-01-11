#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
	#include<iostream> 
	#include<cmath> 
	#include<stdio.h>
	#include<cstdlib>
	#include<stdlib.h>
	#include<conio.h>

	int t[10];     //deklaracja wielkosci tablicy
	t[0]=1;
	t[1]=1;		//przypisanie wartosci pierwszego (czyli o indeksie 0) elementu ci¹gu, i drugiego (o indeksie 1)
	

	cout<<"Elementy ciagu:"<<endl;
	
	for(int i=2;i<10;i++)
	{
		t[i]=t[i-1]+t[i-2];
		
	}

	for(int i=0;i<10;i++)
	{
		cout<<t[i]<<endl;
	}

    system("PAUSE");
    return EXIT_SUCCESS;
}






	/*
    const int n=100;
    int tablica[n];
    int element;
    tablica[0]=1;
    tablica[1]=1;
    cout<<"0 elemet ciagu = "<<tablica[0]<<endl;
    cout<<"1 elemet ciagu = "<<tablica[1]<<endl;    
    
	for(int i = 2;i<=n;i++)
    {
        
    element=tablica[i-1]-tablica[i-2];
    cout<<i<<"elemet ciagu = "<<element<<endl;
        
        
    }
    
    */

