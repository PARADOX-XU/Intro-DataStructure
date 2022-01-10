#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;


int linear_search(int search_value, int lst[], int elements){
    int rval=0;

    for (int i=0; i<elements; i++){
        if(lst[i] == search_value)
            return i+1;

        rval = i+1;    
    }    

    return rval;    
}
