#include <stdio.h>
#define TAM_STR 100

int main() {
    char s[TAM_STR];
    int len = 0;
    printf("Digite a string: ");
    scanf("%99s", s);
    while (s[len] != '\0') {
        len++;
    }
    printf("Quantidade de caracteres: %d\n", len);
    return 0;
}