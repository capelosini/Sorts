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

int main(){
    int* arr = getTestArr();

    bubbleSort(arr, getTestArrLength(), 0);

    return 0;
}
