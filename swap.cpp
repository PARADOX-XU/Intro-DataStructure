#include <iostream>
using namespace std;

void swap(int *xp, int *yp){
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}
