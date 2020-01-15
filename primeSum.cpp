//Find the sum of prime numbers bellow 2000000 

#include <iostream>

using namespace std;

bool testPrime(int num){
    bool flag = true;
    for(int i = 2; i <= num / 2; i++) {
      if(num % i == 0) {
         flag = false;
         break;
      }
   }
   if (flag==true)
      return true;
   else
      return false;
} 

int main()
{
   unsigned long long primeSum = 0;
   
   for(int i = 2; i < 2000000; i++){
       if(testPrime(i)){
           primeSum += i;
           cout << primeSum << endl;
       }
   }
   
    cout << "The prime sum is " << primeSum << endl;
    
	return 0;
}

