#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int cant;
        scanf("%d", &cant);
        int casos[cant*2];
        int suma = 0;
        for (int i = 0; i < cant*2; i+=2) {
            scanf("%d %d", &casos[i], &casos[i+1]);
        }
        int aux = 0;
        for (int j = 1; j <= 8; j++) {
            for (int k = 0; k < cant*2; k+=2){
                if (casos[k] == j && casos[k] <= 8 && casos[k+1] > aux) {
                    aux = casos[k+1];
                }
            }
            suma += aux;
            aux = 0;
        }
        printf("%d\n", suma);
    }
    getchar();
    getchar();
    getchar();
}