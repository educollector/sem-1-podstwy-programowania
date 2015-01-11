#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	int maxNumber = 2000000;
	bool isPrime = true;
//	int notPrime;
	
	
	for(int i=0; i<maxNumber; i++)
	{
		isPrime = true;	
		
		for(int n=2; n<i; n++)  
		{
           // cout<<"sprawdzam liczbe "<<i<<" %"<<n<<endl;
            
			if( i%n ==0 )	
			{
				isPrime = false;
				
			//	cout<<"sprawdzam liczbe if "<<n<<endl;
				break;
                	
			}
		} 
		
		if(isPrime)
		{
			//cout << "Prime! " << i << endl;
		}
	}
cout<<"done";
	system("pause");
	return 0;
}
