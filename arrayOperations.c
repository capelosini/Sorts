#include "arrayOperations.h"
#include <time.h>

int testArr[] = {21, 19, 20, 12, 15, 13, 2, 5, 10, 1, 3, 50, 53, 24, 0, -10, -1, 10, 4};
int testArrLen = 19;

time_t startTime;
time_t endTime;

void startTimer(){
    startTime=time(NULL);
}

void endTimer(){
    endTime=time(NULL);
    printf("\nTimer: %fls\n", difftime(endTime, startTime));
}

int* getTestArr(){
    return testArr;
}

int getTestArrLength(){
    return testArrLen;
}

void printArray(int* arr, int n){

    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int* arr, int x, int y){
    int t=arr[x];
    arr[x]=arr[y];
    arr[y]=t;
}