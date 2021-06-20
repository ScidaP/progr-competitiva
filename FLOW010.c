#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        char n;
        fflush(stdin);
        scanf("%c", &n);
        if (n == 'b' || n == 'B') {
            puts("BattleShip");
        } else if (n == 'c' || n == 'C') {
            puts("Cruiser");
        } else if (n == 'd' || n == 'D') {
            puts("Destroyer");
        } else if (n == 'f' || n == 'F'){
            puts("Frigate");
        }
    }
    return 0;
}