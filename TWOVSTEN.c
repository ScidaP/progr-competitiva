#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n % 10 == 0) {
            printf("0");
        } else if (n % 5 == 0 && n % 10 != 0) {
            printf("1");
        } else {
            printf("-1");
        }
    }
    return 0;
}