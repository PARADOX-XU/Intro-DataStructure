#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPalindrome(int test) {
    int copyO=test;
    int reverseNumber = 0;
    int flag=0; 
    
    if (test < 0) 
        return false;
    
    if (test < 10) 
        return true;

    while (copy != 0){    
        int temp = copy%10;
        
        if (flag == 0)
            flag =1;   
        else 
            reverseNumber *= 10;
       
        reverseNumber += temp; 
        
        copy /= 10;      
    }
    
    if (test == reverseNumber)
        return true;
    else
        return false;
}
