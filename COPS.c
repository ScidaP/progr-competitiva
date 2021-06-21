#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m, x, y;
        scanf("%d %d %d", &m, &x, &y);
        int M[m], rec[m*2];
        for (int i = 0; i < m; i++) {
            scanf("%d", &M[i]);
        }
        int f = 0;
        for (int j = 0; j < m*2; j+=2) {
            rec[j] = M[f] - x*y;
            rec[j+1] = M[f] + x*y;
            f++;
        }
        int g = 0, contTotal = 0;
        for (int h = 0; h < 100; h++) {
            int cont = 0;
            for (int k = 0; k < m; k+=2) {
                if (h < rec[k] || h > rec[k+1]) {
                    cont++;
                }
            }
            if (cont == m) {
                contTotal++;
            }
        }
        printf("%d", contTotal);
    }
    return 0;
}