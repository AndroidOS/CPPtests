//Find the highest palindrome for a 3 digit by 3 digit multiplication

#include <iostream>
#include <string>

using namespace std;

bool testPalindrome(int n)
{  
 
    string str= to_string(n);
    int lenght = str.length();
    bool isPalindrome = true;
    
    for(int i = 0; i < (lenght / 2); i++){
        if (str[i] != str[lenght - (1 + i)]) {
           isPalindrome = false;
           break;
        } 
    }
    
    return isPalindrome;
}   

int main()
{
    int highPalindrome = 0;
    
    for(int x = 1; x < 1000; x++){
        for(int y = 1; y < 1000; y++){
            int testNum = x * y;
            if(testPalindrome(testNum)){
                if(testNum > highPalindrome)
                    highPalindrome = testNum;
            }
                
        }
        
    }
    
    cout << "Highest Palindrome is " << highPalindrome << endl;
    
	return 0;
}
