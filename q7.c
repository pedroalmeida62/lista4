#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAM_VET 3

int main() {
    srand(time(NULL));
    int v[TAM_VET];
    int sum = 0, prod = 1;
    for (int i = 0; i < TAM_VET; i++) {
        v[i] = rand() % 20;
        sum += v[i];
        prod *= v[i];
    }
    printf("Media Aritmetica: %.2f\n", (float)sum / TAM_VET);
    printf("Media Geometrica: %.2f\n", pow(prod, 1.0 / TAM_VET));
    return 0;
}