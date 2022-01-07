#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_Palindrome(int text){
    std::string str = std::to_string(text);
    return palPal(str);  
}

