#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char letras[30];
    scanf("%s", &letras);
    char palabra[50];
    int cantPalabras, k = 0;
    scanf("%d", &cantPalabras);
    for (int i = 0; i < cantPalabras; i++){
        scanf("%s", &palabra);
        for (int j = 0; j < strlen(letras); j++) {
            for (int x = 0; x < strlen(palabra); x++) {
                if (letras[j] == palabra[x]) {
                    k++;
                }
            }
        }
        if (k == strlen(palabra)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        strcpy(palabra, "");
        k = 0;
    }
    getchar();
    getchar();
    getchar();
    return 0;
}