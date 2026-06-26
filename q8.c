#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main() {
    srand(time(NULL));
    int min, max, v1[TAM], v2[TAM];
    printf("Defina o intervalo (min max): ");
    scanf("%d %d", &min, &max);
    int r = max - min + 1;
    
    for (int i = 0; i < TAM; i++) {
        v1[i] = (rand() % r) + min;
        v2[i] = v1[i];
    }
    
    for (int i = 0; i < TAM - 1; i++) {
        int m = i;
        for (int j = i + 1; j < TAM; j++) {
            if (v1[j] < v1[m]) m = j;
        }
        int t = v1[i]; v1[i] = v1[m]; v1[m] = t;
    }
    
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = 0; j < TAM - i - 1; j++) {
            if (v2[j] > v2[j + 1]) {
                int t = v2[j]; v2[j] = v2[j + 1]; v2[j + 1] = t;
            }
        }
    }
    return 0;
}