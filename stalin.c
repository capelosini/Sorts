#include "arrayOperations.h"

void stalinSort(int* arr, int* orgSize){
    int key = arr[0];
    for (int i=1; i<*orgSize; i++){
        if (arr[i] < key || arr[i] < arr[i-1]){
            // kill the element xd
            leftShift(arr, *orgSize, i);
            *orgSize=*orgSize-1;
            i--;
        }
    }
}

int main(){
    int* arr = getTestArr();
    int len = getTestArrLength();

    printArray(arr, len);
    stalinSort(arr, &len);
    printArray(arr, len);
}
