#include <stdio.h>
#define TAM_STR 100

int main() {
    char s[TAM_STR];
    int len = 0;
    printf("Digite a string: ");
    scanf("%99s", s);
    while (s[len] != '\0') len++;
    printf("Inversa: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');
    return 0;
}