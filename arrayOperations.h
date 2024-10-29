#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#ifndef ARRAY_OPERATIONS_H
#define ARRAY_OPERATIONS_H

void startTimer();
void endTimer();
int* getTestArr();
int getTestArrLength();
void printArray(int* arr, int n);
void swap(int* arr, int x, int y);

#endif
