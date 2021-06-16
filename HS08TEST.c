#include <stdio.h>
#include <stdlib.h>

int main() {
    int aRetirar; float total;
    scanf("%d %f", &aRetirar, &total);

    if (aRetirar < total && aRetirar % 5 == 0) {
        float totalFinal = total - aRetirar - 0.50;
        if (totalFinal >= 0) {
            printf("%.2f", totalFinal);
        } else {
            printf("%.2f", total);
        }
    } else {
        printf("%.2f", total);
    }
    getchar();
    getchar();

    return 0;
}