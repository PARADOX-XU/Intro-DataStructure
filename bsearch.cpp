#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int binary_search( int search_value, int lst[], int elements){
    int low, high, mid;
    int ind;
    int counter=0;
    bool found = false;
    low = 0;
    high = elements;
  
    while (( found == false) && (low<=high) ){
        counter++;
        mid = (low + high)/2;
        if (lst[mid] == search_value){
            ind = mid;
            found = true;
        }
        else if (search_value < lst[mid])
            high = mid -1;
        else 
            low = mid + 1;   
    }
       return counter;

}
