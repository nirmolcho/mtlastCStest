#include "exam.h"

int* processDigits(int numbers[], int size)
{
    int *allDigits = (int*) malloc(sizeof(int) * 10);
    int myNum;
    if (!allDigits) {
        return NULL;
    }
    for (int i = 0; i < 10; i++) {
        allDigits[i] = 0;
    }
    for(int i = 0; i < size; i++) {
        myNum = numbers[i];
        while (myNum != 0) {
            allDigits[myNum % 10] = allDigits[myNum % 10] * 10 + myNum % 10;
            myNum = myNum / 10;
        }
    }
    return allDigits;
}