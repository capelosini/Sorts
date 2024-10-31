#include "arrayOperations.h"

void bogoSort(int* arr, int size){
    int i=0;
    while (1){
        if (arr[i] > arr[i+1]){
            shuffle(arr, size);
            printArray(arr, size);
            i=0;
        }
        else if (i == size-2){
            break;
        } else{
            i++;
        }
    }
}

int main(){
    int* arr = getTestArr();
    int len = getTestArrLength();

    printArray(arr, len);
    startTimer();
    bogoSort(arr, len);
    endTimer();

}
