#include <cstdlib>
#include <iostream>
#include<ctime>
#include <algorithm>

/* Program
a) wyznaczaj¹cy indeks oraz wartoœc najmniejszego i najwiêkszego
elementu w ci¹gu liczb,
b) obliczaj¹cy sumy co trzecich elementów ci¹gu liczb,
c) sprawdzaj¹cy, czy ciag liczb jest ci¹giem rosn¹cym lub malej¹cym*/

using namespace std;

int main2(int argc, char *argv[])
{
    int n=10;
    int suma=0;
    int wartosc=0;
      
    cout<<"Pdaj liczbe elementow ciag: ";
    cin>>n;
    int* tablica=new int[n];
  
//wprowadzanie warosci elementow ciagu z klawiatury
    for( int i=0; i<n; i++) 
        {
        printf("wpisz el. o indeksie %d: ",i);
        scanf("%d",&tablica[i]);
        printf("\ttablica[%d]=%d\n",i,tablica[i]); 
        }
        
     
     //wypelnianie tablicy losowymi liczbami z przedzialu
    /* for( int i=0; i<N; i++) {
        t[i] = a + rand()%(b- a+1);
        // funkcja rand()%a zwraca liczb pseudolosow z zakresu [0,a)
        printf("t[%d]=%d\n",i,a[i]);
        */
        
//wyznacza indeks i wartosc najmniejszego i najwiekszego elementu
     
     /* cout << "Najmniejszy element: " << *min_element(tablica,tablica+n) << endl;
      cout << "Najwiekszy element: " << *max_element(tablica,tablica+n) << endl;*/
     
//max
     int max = -32767; //minimalna wartosc jaka zmiesi sie w tblicy intów
     int numerElementuMax;
     int i;
     for(i=0;i<n;i++)
     {
            if(max<tablica[i])
            {
                max=tablica[i];
                numerElementuMax=i;
            }
     }    
     cout<<"\nWartosc maksymalnego elementu to= "<<max<<endl
            <<"Jest to "<<numerElementuMax<<"-ty element tablicy (tablica["<<numerElementuMax<<"])"<<endl<<endl<<endl;

//min
     int min = 32767; //mks wartosc jaka zmiesi sie w tblicy intów
     int numerElementuMin;
     for(i=0;i<n;i++)
     {
            if(min>tablica[i])
            {
                min=tablica[i];
                numerElementuMin=i;
            }
     }    
     cout<<"Wartosc minimalnego elementu to= "<<min<<endl
            <<"Jest to "<<numerElementuMin<<"-ty element tablicy (tablica["<<numerElementuMin<<"])"<<endl<<endl<<endl;

     
     
//oblicza sume co trzecich elementow ci¹gu
     cout<<"Suma co trzecich elementow ciagu:\n";
     for(i=0;i<n;i+=3)
     {
        printf("tablica[%d]=%d\n",i,tablica[i]);
        wartosc=tablica[i];
        //cout<<"wartosc: "<<tablica[i]<<endl;
        suma =suma+wartosc;
     }
     cout<<"suma co trzecich elementow = "<<suma<<endl<<endl; 
     
//rosnacy czy malejacy???    
    int poprzedniElement=tablica[0];
    bool rosnacy =true;
    bool malejacy =true;
    for(i=1;i<n;i++)
    {
        if(poprzedniElement<tablica[i])
        {
            poprzedniElement=tablica[i];
            malejacy =false;
            cout<<"ten ciag moze byc rosnacy"<<endl;  
        }
        else if(poprzedniElement>tablica[i])
        {
            poprzedniElement=tablica[i];
            rosnacy =false;
            
            cout<<"Ten ciag moze byc malejacy"<<endl;
        }    
    }


 
     

    delete[] tablica;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
