#include <stdio.h>

int main() {
    int num[2][4];
    int x = 2;
    int y = 4;
    
    while (x < 1) {
        num[x][y] = (y + 1) * 10;
        x = y + 1;
    }

    while (x > 1) {
        printf("%d\n", num[x][y]);
        x = y + 1;
    }

    return 0;
}
