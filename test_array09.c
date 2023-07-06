#include<stdio.h>

int main() {
    int num[2][4];
    int x = 0, y;

    do {
        y = 0;
        do {
            num[x][y] = (y + 1 + x + x + x + x) * 10;
            y = y + 1;
        } while (y < 4);

        x = x + 1;
    } while (x < 2);

    x = 0;
    do {
        y = 0;
        do {
            printf("%d ", num[x][y]);
            y = y + 1;
        } while (y < 4);

        printf("\n");
        x = x + 1;
    } while (x < 2);

    return 0;
}