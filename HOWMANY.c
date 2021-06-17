#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, cantN = 0;
    scanf("%d", &n);
    while (n > 0) {
        n /= 10;
        cantN++;
    }
    if (cantN > 3) {
        puts("More than 3 digits");
    } else {
        printf("%d", cantN);
    }
    return 0;
}