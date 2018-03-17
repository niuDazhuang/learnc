#include <stdio.h>

int main() {
    const int len = 20;
    int i, j, a[len][len] = {0};
    for (i = 0; i < len; i++) {
        a[i][0] = 1;
        for (j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (i = 0; i < len; i++) {
        for (j = 0; j <= i; j ++) {
            printf("%8d", a[i][j]);
        }
        printf("\n");
    }
			
    return 0;
}
