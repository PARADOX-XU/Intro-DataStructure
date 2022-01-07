#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_Palindrome(int test){
    std::string str = std::to_string(test);
    return palPal(str);  
}

