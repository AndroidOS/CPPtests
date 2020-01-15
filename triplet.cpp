//find Pythagorean triplet for which a + b + c = 1000 and then the product abc.
#include <iostream>


using namespace std;


int main()
{
	for(int a = 1; a < 10000; a++){
        for(int b = 1; b < 10000; b++){
            for(int c = 1; c < 10000; c++){
                if (((a*a) + (b*b) == (c*c)) && (a + b + c == 1000)){
                    cout << (a*b*c) << endl;
                }
            }
        }
        
    }
	return 0;
}
