#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#ifndef ARRAY_OPERATIONS_H
#define ARRAY_OPERATIONS_H

void startTimer();
void endTimer();
int* getTestArr();
int getTestArrLength();
void printArray(int* arr, int n);
void swap(int* arr, int x, int y);
void shuffle(int* arr, int size);
void leftShift(int* arr, int size, int index);

#endif
