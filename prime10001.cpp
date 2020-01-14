//Find the 10001th prime number 

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
   int primeCount = 0;
   int testNum = 2;
   int lastPrime = 0;
   
   while(primeCount < 10001){
       if(testPrime(testNum)){
           primeCount++;
           cout << testNum << endl;
           lastPrime = testNum;
       }
        testNum++;
   }
   
   cout << endl;
   
    cout << "The 10001 prime is " << lastPrime << endl;
    
	return 0;
}
