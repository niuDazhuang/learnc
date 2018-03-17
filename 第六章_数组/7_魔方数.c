#include <stdio.h>

int main() {
    int a[15][15] = {0}, i, j, k, p = 0, n = 3;
    while (p == 0) {
        printf("奇数边长(<15)：");
        scanf("%d", &n);
        if ((n != 0) && (n <= 15) && (n%2!=0)) {
            p = 1;
        }
    }
    i = 1;
    j = n / 2 + 1;
    a[i][j] = 1;
    for (k = 2; k <= n * n; k++) {
        i -= 1;
        j += 1;
        if (i < 1 && j > n) {
            i += 2;
            j -= 1;
        } else {
            if (i < 1) i = n;
            if (j > n) j = 1;
        }
        if (a[i][j] == 0) {
            a[i][j] = k;
        } else {
            i = i + 2;
            j = j - 1;
            a[i][j] = k;
        }
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
