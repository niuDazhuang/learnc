#include <stdio.h>

int main() {
    int num, i = 0, a[20] = {1, 2, 3, 5, 9, 16, 78};
    printf("目标数组：\n");
    while (a[i] != '\0') {
        printf("%-5d", a[i++]);
    }
    printf("\n输入插入数：");
    scanf("%d", &num);
    while (a[--i] > num) {
        a[i + 1] = a[i];
    }
    a[i + 1] = num;
    printf("\n新的数组：\n");
    i = 0;
    while (a[i] != '\0') {
        printf("%-5d", a[i++]);
    }
    printf("\n");
    return 0;
}
