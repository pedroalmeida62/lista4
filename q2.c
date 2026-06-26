#include <stdio.h>
#define TAM_STR 100

int main() {
    char s[TAM_STR], c;
    int f = 0;
    printf("Digite a string: ");
    scanf("%99s", s);
    printf("Digite o caractere: ");
    scanf(" %c", &c);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            f = 1;
            break;
        }
    }
    if (f) printf("A string contem o caractere.\n");
    else printf("A string nao contem o caractere.\n");
    return 0;
}