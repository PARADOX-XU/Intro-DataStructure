#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool palPal(string x);

bool is_Palindrome(int test){
    std::string str = std::to_string(test);
    return palPal(str);  
}
bool palPal(string str){
    int length =0;
    switch (str.length()){
        case 1:
            return true;
            break;  //just to have it
        case 2: case 3:
            if(str[0] == str[str.length()-1])
                return true;
            else 
                return false;    
                break;            
        default:
            if((str[0] != str[str.length()-1]) || (str[1] != str[str.length()-2])){
                return false;  //whenever this happens return false
            }
            else{
                length = str.length()-2;
               // if (isPalindrome( atoi( str.substr(1,length).c_str() ) ) )
               if(palPal(str.substr(1,length)))
                    return true;
                else 
                    return false;
                       
            }
            break;
    }
}
