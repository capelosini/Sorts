#include "arrayOperations.h"

void merge(int* arr, int astart, int aend, int bstart, int bend){
    int arrayALen=aend-astart;
    int arrayBLen=bend-bstart;

    int arrayA[arrayALen], arrayB[arrayBLen];

    memcpy(arrayA, arr+astart, arrayALen*sizeof(int));
    memcpy(arrayB, arr+bstart, arrayBLen*sizeof(int));

    int i = 0, j = 0;
    for (int t=astart; t<bend; t++){
        if (j >= arrayBLen || arrayA[i]  <= arrayB[j]){
            arr[t]=arrayA[i];
            i++;
        } else{
            arr[t]=arrayB[j];
            j++;
        }
    }
}

void mergeSort(int* arr, int start, int end){
    if (end-start <= 1){
        return;
    }
    int m = start + (end-start)/2;
    printf("\narrA: %d, %d | arrB: %d, %d\n", start, m, m, end);
    mergeSort(arr, start, m);
    mergeSort(arr, m, end);

    merge(arr, start, m, m, end);
}

int main(){

    int* arr = getTestArr();
    int len = getTestArrLength();

    mergeSort(arr, 0, len);
    printArray(arr, len);

    return 0;
}
