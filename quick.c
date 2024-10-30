#include "arrayOperations.h"

int count=0;

int partition(int* arr, int start, int end){
    int p = arr[end];
    int i = start;
    for (int j = start; j<end; j++){
        count++;
        if (arr[j] <= p){
            swap(arr, i, j);
            i++;
        }
    }
    swap(arr, i, end);
    return i;
}

void quickSort(int *arr, int start, int end){
    count++;
    if (end <= start)
        return;

    int pivot = partition(arr, start, end);
    printArray(arr, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}


int main(){

    int* arr = getTestArr();
    int len = getTestArrLength();

    startTimer();
    quickSort(arr, 0, len-1);
    printArray(arr, len);
    endTimer();
    printf("Count: %d\n\n", count);
}