#include <stdio.h>
#define TAM 15

int main() {
    float v[TAM], min, max;
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i);
        scanf("%f", &v[i]);
        if (i == 0) min = max = v[i];
        else {
            if (v[i] < min) min = v[i];
            if (v[i] > max) max = v[i];
        }
    }
    printf("Soma do menor e maior: %.2f\n", min + max);
    return 0;
}