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
        for (int j = 0; j < cant*2; j+=2) {
            if (j <= 8) {
                suma += casos[j+1];
            }
        }
        printf("%d", suma);
    }
    getchar();
    getchar();
    getchar();
}