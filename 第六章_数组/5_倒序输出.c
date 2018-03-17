#include <stdio.h>

int main() {
    int tmp, mid, i = 0, j, a[] = {1, 2, 3, 5, 9, 16, 78};

    printf("目标数组：\n");
    while (a[i] != '\0') {
        printf("%-5d", a[i++]);
    }

    mid = (i - 1) / 2;
    for (j = 0; j < mid; j++ ) {
        tmp = a[j];
        a[j] = a[i - 1 - j];
        a[i - 1 - j] = tmp;
    }

    printf("\n倒序数组：\n");
    i = 0;
    while (a[i] != '\0') {
        printf("%-5d", a[i++]);
    }

    printf("\n");
    return 0;
}
