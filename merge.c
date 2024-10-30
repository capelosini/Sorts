#include "arrayOperations.h"

int count=0;

void merge(int* arr, int astart, int aend, int bstart, int bend) {
    int arrayALen = aend - astart;
    int arrayBLen = bend - bstart;

    int arrayA[arrayALen], arrayB[arrayBLen];

    memcpy(arrayA, arr + astart, arrayALen * sizeof(int));
    memcpy(arrayB, arr + bstart, arrayBLen * sizeof(int));

    int i = 0, j = 0, k = astart;
    while (i < arrayALen && j < arrayBLen) {
        count++;
        if (arrayA[i] <= arrayB[j]) {
            arr[k++] = arrayA[i++];
        } else {
            arr[k++] = arrayB[j++];
        }
    }

    while (i < arrayALen) {
        count++;
        arr[k++] = arrayA[i++];
    }

    while (j < arrayBLen) {
        count++;
        arr[k++] = arrayB[j++];
    }
}

void mergeSort(int* arr, int start, int end){
    count++;
    if (start >= end-1){
        return;
    }
    int m = start + (end-start)/2;
    mergeSort(arr, start, m);
    mergeSort(arr, m, end);

    merge(arr, start, m, m, end);
    printArray(arr, end);
}

int main(){

    int* arr = getTestArr();
    int len = getTestArrLength();
    startTimer();
    mergeSort(arr, 0, len);
    endTimer();
    printf("Count: %d\n\n", count);

    return 0;
}
