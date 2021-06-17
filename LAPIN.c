#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char w[100];
        int mitad, total = strlen(w);
        scanf("%s", w);
        if (total % 2 == 0) {
            mitad = total / 2;
        } else {
            mitad = (total+1)/2;
        }
        for (int j = 0; j < mitad; j++) {
            for (int x = mitad; x < total; x++) {
                if (w[j] == w[x]) {
                    w[x] = '1';
                    break;
                }
            }
        }
        int p = 0;
        for (int k = mitad; k < total; k++) {
            if (w[k] != '1') {
                p++;
            }
        }
        if (p > 0) {
            puts("NO");
        } else {
            puts("YES");
        }
    }
    return 0;
}