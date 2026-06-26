#include <stdio.h>
#include <stdlib.h>
#define DIM 5

int main() {
    int m[DIM][DIM], x, c = 0;
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            m[i][j] = rand() % 10;
        }
    }
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            if (m[i][j] == x) c++;
        }
    }
    printf("O valor %d aparece %d vezes.\n", x, c);
    return 0;
}