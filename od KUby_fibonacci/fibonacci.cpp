#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    /*int k;
    int suma,valueK;
    int i=1;
    
    cout<<"ktory element ciagu chcesz obliczyc?"<<endl;
    cin>>k;
    
    for(i; i<=k;i++)
    {
        if(k=1)
        valueK==0;
        suma=0;
                
        else if(k=2)
        valueK==1;
        suma=1;
        
        else
        valueK=
        
        
        
    }*/
    
    unsigned int fib(unsigned int n) {
    if(n == 0) return 0;
    unsigned int a, b;
    a = 0; b = 1;
    for(unsigned int i=0; i < n-1; i++) {
        std::swap(a, b);
        b += a;
    }
    return b;
}
        
       // cout<<"valueN"<<valueN<<"\nsuma: "<<suma;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
