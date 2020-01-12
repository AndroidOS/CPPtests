//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    int firstTerm = 1;
    int secondTerm = 1;
    
    while(firstTerm < 4000000){
        
        int sum = firstTerm + secondTerm;
        
        cout << sum << endl;
        
        if ( sum % 2 == 0){
            total += sum;
        }
        
        secondTerm = firstTerm;
        firstTerm = sum;
    }
    
	return 0;
}
