#include <cstdlib>
#include <iostream>
#include<conio.h>
#include <string.h>

/*
2. wywietlajcy wyrazy w1 i w2 w kolejnoci alfabetycznej
3. wywietlajcy wyrazy w1 i w2 w kolejnoci: "krótszy, d³uszy"
4. tworzcy nowy wyraz w3 poprzez ustawienie na przemian kolejnych liter wyrazów w1 i w2
5. zliczajcy liczbe wystpie poszczególnych liter w wyrazie w3*/

using namespace std;

int main(int argc, char *argv[])
{
    int i=0;
    int b=0;
    char w1[45];
    char w2[45];
    char w3[100];
    int w1Long, w2Long;
    int dlugosc;
    
    cout<<"wprowadz dwa wyrazy:\n";
    cout<<"wyraz 1: ";
  
    while( scanf("%c", &w1[i]) == 1 )
    {
        if( w1[i]=='\n' )
        {
            w1[i] = 0;
            break;
        }
         ++i;
    }
    
    cout<<"wyraz 2: ";
    i=0;
    while( scanf("%c", &w2[i]) == 1 )
    {
        if( w2[i]=='\n' )
        {
            w2[i] = 0;
            break;
        }
         ++i;
    }
    
    cout<<"Podales nastepujace wyrazy:\n";
    printf("%s\n",w1);
    printf("%s\n",w2);
    
    cout<<"wyrazy w kolejnosci alfabetycznej:"<<endl;
    
        dlugosc=strcmpi(w1,w2);
    
        if(dlugosc<0)
        {
            printf("%s\n%s\n",w1,w2);
        }
        else
        {
             printf("%s\n%s\n",w2,w1);
        }    
    
    cout<<"wyrazy wyswietlone w kolejnosci od krotszego do dluzszego"<<endl;
        
    /*w1Long=sizeof w1/sizeof w1[0];
    w2Long=sizeof w2/sizeof w2[0];
    
    cout << "Dlugosc w1: " << w1Long << endl;
    cout << "Dlugosc w2: " << w2Long << endl;*/
    
    cout << "Dlugosc slowa w1: " << strlen(w1) << endl;
    cout << "Dlugosc slowa w2: " << strlen(w2) << endl;
    
        if(strlen(w1)<=strlen(w2))
        {
            printf("%s\n%s\n",w1,w2);   
        }
          else
        {
             printf("%s\n%s\n\n",w2,w1);
        }   
    
    cout<<"nowy wyraz powstaly z naprzemiennego ulozenia liter podanych wyrazow"<<endl;
        i=0;
        int sumaZnakow=strlen(w1)+strlen(w2);
        int elementW1=0;
        int elementW2=0;
        
        for(i=0;i<sumaZnakow;i++)
        {          
            if( (i%2==0 && elementW1<strlen(w1)) || elementW2=>strlen(w2))
            {
                w3[i]=w1[elementW1];
                ++elementW1;    
            }
            else
            {
                w3[i]=w2[elementW2];
                ++elementW2;    
            }
        }    
    cout<<w3<<endl;
    
    cout<<"liczba wystapien poszczegolnych liter w nowym wyrazie"<<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
