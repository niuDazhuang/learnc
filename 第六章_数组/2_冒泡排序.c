#include <stdio.h>

int main() {
    int i, j, tmp, a[10];
    printf("请输入10个整数：\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    };
    for (i = 0; i <= 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    printf("\n排序后结果：\n");
    for (i = 0; i < 10; i++ ) {
        printf("%-10d", a[i]);
    }
    printf("\n");
    return 0;
}
