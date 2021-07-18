#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, cont = 0; // cambiar n por long long o algo así.
        scanf("%d", &n);
        if (n % 10 != 0) {
            while (n % 10 != 0 || cont >= 100){
                n *= 2;
                cont++;
            }
            if (n % 10 == 0) {
                printf("%d\n", cont);
            } else {
                puts("-1");
            }
        } else {
            puts("0");
        }
    }
    return 0;
}