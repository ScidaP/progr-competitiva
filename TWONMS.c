#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                a *= 2;
            } else {
                b *= 2;
            }
        }
        if (a < b) {
            printf("%d\n", b/a);
        } else {
            printf("%d\n", a/b);
        }
    }
    return 0;
}