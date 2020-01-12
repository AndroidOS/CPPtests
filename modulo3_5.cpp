//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    
	for(int num = 1; num < 1000; num++){
        
        if ( num % 3 == 0 || num % 5 == 0 ) {
            total += num;   
            }
        }
    
    cout << "Total " << total << endl;
    
	return 0;
}
