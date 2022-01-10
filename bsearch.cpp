#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int binary_search( int val, int srtArr[], int srtArrSize){
    int low, high, mid;
    int ind;
    int counter=0;
    bool found = false;
    low = 0;
    high = srtArrSize;
  
    while (( found == false) && (low<=high) ){
        counter++;
        mid = (low + high)/2;
        if (srtArr[mid] == val){
            ind = mid;
            found = true;
        }
        else if (val < srtArr[mid])
            high = mid -1;
        else 
            low = mid + 1;
       
    }
