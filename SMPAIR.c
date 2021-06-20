#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int a;
        scanf("%d", &a);
        int n[a], aux1 = 0, indiceAux1, aux2 = 0;
        for (int x = 0; x < a; x++) {
            scanf("%d", &n[x]);
        }
        aux1 = n[0];
        aux2 = n[0];
        for (int j = 0; j < a; j++) {
            if (aux1 >= n[j]) {
                aux1 = n[j];
                indiceAux1 = j;
            }
        }
        for (int k = 0; k < a; k++) {
            if (k != indiceAux1) {
                if (aux2 > n[k]) {
                    aux2 = n[k];
                }
            }
        }
        printf("%d", aux1+aux2);
            getchar();
    }
    getchar();
        getchar();
    return 0;
}