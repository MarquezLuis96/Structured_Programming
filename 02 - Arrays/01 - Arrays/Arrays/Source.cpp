//DATA
/*
    Date: 2020/10/17
    Author: Luis Márquez
    Description:
             //
*/

//LIBRARIES
#include <stdlib.h>
#include <stdio.h>
const int MAX = 5;

//MAIN FUNCTION
int main() {
    int integerList[MAX];
    integerList[0] = 1;
    integerList[1] = 2;
    integerList[2] = 3;
    integerList[3] = 4;
    integerList[4] = 5;

    float floatList[] = { 1.5, 2.5, 33.33, 54.99, 0.002 };

    char charList[MAX];
    charList[0] = 'L';
    charList[1] = 'u';
    charList[2] = 'i';
    charList[3] = 's';
    charList[4] = '.';

    printf("Integer List:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Element [%d] = %d", i, integerList[i]);
        printf("\n");
    }

    printf("\n");

    printf("Float List:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Element [%d] = %f", i, floatList[i]);
        printf("\n");
    }

    printf("\n");

    printf("Char List:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Element [%d] = '%c'", i, charList[i]);
        printf("\n");
    }

    printf("\n");

    return 0;
}