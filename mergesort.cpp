#include <iostream>
#include "cpluspluslabs.h"
using namespace std;

void merge_sort(int arr[], int left, int right){
    int mid = (left + right)/2;
    if (left == right)
        return;
    else{
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge (arr, left, mid, right);
    }
}
