#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, cont = 0; long long k;
    scanf("%d %lld", &n, &k);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int j = 0; j < n; j++) {
        if (nums[j] % k == 0) {
            cont++;
        }
    }
    printf("%d", cont);
    getchar();
    getchar();
    getchar();
    return 0;
}