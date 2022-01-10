#include <iostream>
using namespace std;

void selection_sort(int arr[], int elements){
    int temp;
    int idx;

    for (int i=0;i<elements;i++){
        temp = arr[i];
        idx = i;
        for (int j=i+1; j<elements;j++){
            if(arr[j] < temp){
                temp = arr[j];
                idx = j;
            }
        }
        if (idx !=i)
            swap(arr[i], arr[idx]);
    }
}
