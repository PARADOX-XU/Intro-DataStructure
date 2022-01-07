#include <iostream>
#include <string>
#include <vector>

using namespace std;
bool palPal(string x);

bool isPalindrome(int x){
   // int length = 0;
    std::string str = std::to_string(x);
    return palPal(str);

   
}
