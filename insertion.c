#include "arrayOperations.h"

void insertionSort(int* arr, int n){
    int count=0;
    startTimer();
    for (int i=1; i<n; i++){
        int j=i;
        while (j >= 1 && arr[j] < arr[j-1]){
            swap(arr, j, j-1);
            printArray(arr, n);
            count++;
            j--;
        }
    }
    endTimer();
    printf("Count: %d\n", count);
}

int main(){
    int* arr = getTestArr();
    int n = getTestArrLength();

    insertionSort(arr, n);
}
