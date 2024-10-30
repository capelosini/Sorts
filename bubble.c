#include "arrayOperations.h"

void bubbleSort(int* arr, int n, unsigned char invert){
    int count=0;
    startTimer();
    for (int i=0; i<n; i++){
        int swaps=0;
        for (int j=0; j<n-i-1; j++){
            if ((arr[j] > arr[j+1] && !invert) || (arr[j] < arr[j+1] && invert)){
                swap(arr, j, j+1);
                printArray(arr, n);
                count++;
                swaps++;
            }
        }
        if (swaps == 0){
            endTimer();
            printf("Count: %d\n\n", count);
            return;
        }
    }
    endTimer();
    printf("Count: %d\n\n", count);
}

void bubbleSortR(int* arr, int n, int i){
    if (n == 1)
        return;
    if (i == n-1){
        i=0;
        n--;
    }

    bubbleSortR(arr, n, i+1);

    if (arr[i] > arr[i+1]){
        swap(arr, i, i+1);
        printArray(arr, getTestArrLength());
    }
}

int main(){
    int* arr = getTestArr();
    int len = getTestArrLength();
    bubbleSort(arr, len, 0);
    // recursive
    //bubbleSortR(arr, len, 0);
    //printArray(arr, len);

    return 0;
}
