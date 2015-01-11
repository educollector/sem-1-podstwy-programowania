#include <cstdlib>
#include <iostream>
#include<ctime>
#include <algorithm>

const int N=1000;
/* Program
a) wyznaczaj¹cy indeks oraz wartoœc najmniejszego i najwiêkszego
elementu w ci¹gu liczb,
b) obliczaj¹cy sumy co trzecich elementów ci¹gu liczb,
c) sprawdzaj¹cy, czy ciag liczb jest ci¹giem rosn¹cym lub malej¹cym*/

using namespace std;

int main(int argc, char *argv[])
{
    int tablica[N]; //def. tablicy N-elementowej
    int n; //liczba elementów ci¹gu liczbowego

    do{
		cout<<"Pdaj liczbe elementow ciag (n): ";
		cin>>n;
    }while(n>N); 
      
 //  wypelnianie tablicy liczbami
     srand(time(0));//inicjalizacja generatora liczb pseudolosowych
     int wybor; //wybor sposobu generowania danych
     cout<<"klawiatura-1, losowy-2";
     cin>>wybor;
     
     switch(wybor)
     {
		case 1:
           for( int i=0; i<n; i++) 
           {
                printf("wpisz el. o indeksie %d: ",i);
                scanf("%d",&tablica[i]);
                printf("\ttablica[%d]=%d\n",i,tablica[i]); 
           }
           break;
		case 2://generator liczb pseudolosowych z podanego zakrsu
			{
				int a1;
				int an;
		
				do  //sprawdzenie, czy wprowadzono najpierw mniejsza a potem wieksza wartosc z zakresu
				{ 	
					cout<<"Podaj zakres ciagu, pamietaj -dolna wartosc musi byc mniejsza od gornej\n";
					cout<<"Podaj dolny zakres ciagu:\n";
					cin>>a1;
					cout<<"Podaj gorny zakres ciagu:\n";
					cin>>an;
				
				}while(a1>=an);
               
				for(int i=0; i<n;i++)
				{
					tablica[i]=a1+(rand()%(an-a1));
					cout<<tablica[i]<<endl;
				}   
           }        
           break;     
     }

//------------------------suma co drugich el. ciagu------------------
     cout<<"Suma co drugich elementow ciagu:\n";
     int suma=0;
     for(int i=0;i<n;i+=2)
     {
             suma+=tablica[i];
     }
             cout<<suma;
     
//wyznacza indeks i wartosc najmniejszego i najwiekszego elementu
     
     /* cout << "Najmniejszy element: " << *min_element(tablica,tablica+n) << endl;
      cout << "Najwiekszy element: " << *max_element(tablica,tablica+n) << endl;*/
     
//-----------------------------max-----------------------------------
     
	int max = -2147483647; //minimalna wartosc jaka zmiesi sie w tblicy intów
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

//---------------------------min--------------------------------------
     int min = 2147483647; //mks wartosc jaka zmiesi sie w tblicy intów
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
     int wartosc;
     
     cout<<"Suma co trzecich elementow ciagu:\n";
     for(i=0;i<n;i+=3)
     {
        printf("tablica[%d]=%d\n",i,tablica[i]);
        wartosc=tablica[i];
        //cout<<"wartosc: "<<tablica[i]<<endl;
        suma =suma+wartosc;
     }
     cout<<"suma co trzecich elementow = "<<suma<<endl<<endl; 
 /*    
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
*/
//czy malejacy czy rosnacy
int malejacy=1;
    for(int i=0;i<n;i++)
    {
         if(tablica[i+1]>=tablica[i])
         {
             malejacy=0;     
             break;                    
         }
    }
	if(malejacy)
		cout<<"ciag malejacy\n";
	else
		cout<<"ciag niemalejacy\n";

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
