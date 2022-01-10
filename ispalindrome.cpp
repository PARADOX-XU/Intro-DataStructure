#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_Palindrome(int test)
{
    for(int i = 0; i <= test.length()-1; i++)
    {
        if(test[i] != testt[test.length()-1-i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
