#include <stdio.h>

int dividir(int a, int b) {
    if (a >= b) {
        return a/b;
    } else {
        return b/a;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);
        if (n % 2 == 0) {
            printf("%d\n", dividir(a, b));
        } else {
            printf("%d\n", dividir(2*a, b));
        }
    }
    return 0;
}