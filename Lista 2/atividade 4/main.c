#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    int arraySize = argc - 2;
    int vet[arraySize];

    for (int i = 0; i < arraySize; i++) {
        int value = atoi(argv[i + 2]);
        vet[i] = value;
    }

    bubble_sort(vet, arraySize);

    for (int i = 0; i < arraySize; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}

// gcc main.c -o main
//./main 54 26 93 17 77 31 44 55 20
