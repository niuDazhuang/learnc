#include <stdio.h>
#define M 3
#define N 4

/*
4 2 5 9
3 2 1 4
5 4 3 6
*/
int main() {
    int i, j, k, a[M][N], max, maxj, flag = 0;
    printf("输入二维数组(%d*%d):\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < M; i++) {
        maxj = 0;
        max = a[i][maxj];
        for (j = 1; j < N; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                maxj = j;
            }
        }
        flag = 1;
        for (k = 0; k < M; k++) {
            if (a[k][maxj] < max) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("鞍点为：a[%d][%d] = [%d]\n", i, maxj, max);
            break;
        }
    }

    if (flag == 0) {
        printf("无鞍点\n");
    }

    return 0;
}
