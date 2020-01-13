#include <iostream>

using namespace std;

int main()
{
	for(long n = 1; n < 100000000000; n++){
        bool found = false;
        for(int i = 1; i < 21; i++){
            
            if(n % i != 0){
                found = false;
                break;
                } else {
                    found = true;
                }
                
            } 
            
            if(found == true){
                cout << n << endl;
                break;
            }
        }
	return 0;
}
