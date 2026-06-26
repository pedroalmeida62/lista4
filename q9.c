#include <stdio.h>
#define DIM 3

int main() {
    int m[DIM][DIM];
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Diagonal principal: ");
    for (int i = 0; i < DIM; i++) {
        printf("%d ", m[i][i]);
    }
    printf("\n");
    return 0;
}