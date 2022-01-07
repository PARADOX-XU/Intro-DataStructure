#include <iostream>
#include <string>
#include <vector>
using namespace std;

double* getDoubles(int size){
    double* temp = new double[size];  
    for(int i=0 ; i<size; i++)
        temp[i]= (double) (i+1)/3.0;
    return temp;      

int main(){
    int x = 11;
    double* arr= getDoubles(x);  
    for(int i=0 ; i<x; i++)
        cout << arr[i] << endl;

    arr = NULL;
    delete[] arr; 

    return 0;
}
