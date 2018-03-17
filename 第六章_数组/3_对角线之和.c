#include <stdio.h>

int main() {
    int i, j, sum = 0, a[3][3];
    printf("输入3*3整型数组：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        sum += a[i][i];
    }
    printf("\n结果：%d\n", sum);
    return 0;
}
