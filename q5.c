#include <stdio.h>
#include <string.h>
#define TAM_STR 200

int main() {
    char s1[TAM_STR], s2[TAM_STR], res1[TAM_STR], res2[TAM_STR];
    printf("Digite duas strings: ");
    scanf("%99s %99s", s1, s2);
    
    strcpy(res1, s1);
    strcat(res1, s2);
    printf("Versao com strcat: %s\n", res1);
    
    int i = 0, j = 0;
    while (s1[i] != '\0') {
        res2[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0') {
        res2[i] = s2[j];
        i++;
        j++;
    }
    res2[i] = '\0';
    printf("Versao sem strcat: %s\n", res2);
    return 0;
}