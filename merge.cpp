#include <iostream>
using namespace std;

void merge(int arr[], int lowLeft, int highLeft, int highRight){
    int lowRight = highLeft + 1;
    int *mergedArr;
    int iRight, iLeft, iRes;
    int size = highRight - lowLeft + 1;
    mergedArr = new int[size];
    iLeft = lowLeft;
    iRight = lowRight;
    iRes = 0;
  
    while (iLeft <= highLeft && iRight <= highRight){
        if(arr[iLeft]<arr[iRight]){
            mergedArr[iRes]= arr[iLeft];
            iLeft++;
            iRes++;
        }
        else {
            mergedArr[iRes]= arr[iRight];
            iRight++;
            iRes++;
        }
    }
    while (iLeft <= highLeft){
        mergedArr[iRes] =  arr[iLeft];
        iLeft++;
        iRes++;
    }
    while (iRight <= highRight ){
        mergedArr[iRes] = arr[iRight];
        iRight++;
        iRes++;
    }

    for(int i=0, iArr = lowLeft; i<size ; i++, iArr++ ){
        arr[iArr] = mergedArr[i];
    }
    
    delete []mergedArr;
}
