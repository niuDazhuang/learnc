#include <stdio.h>

#define LEN 15

int main() {
    int i, flag = 0, a[LEN], tar;
    int start = 0, mid = 0, end = LEN - 1;
    for (i = 0; i < LEN; i++) {
        a[i] = (LEN - i) * 2;
    }
    printf("请输入要查找的数：\t");
    scanf("%d", &tar);

    while(flag == 0 && start <= end) {
        mid = (start + end) / 2;
        if (a[mid] > tar) {
            start = mid + 1;
        } else if (a[mid] < tar) {
            end = mid - 1;
        } else {
            flag = 1;
        }
    }

    printf("目标数组：");
    for (i = 0; i < LEN; i++) {
        printf("%5d", a[i]);
    }

    if (flag == 1) {
        printf("\n结果：%5d\n", mid);
    } else {
        printf("\n结果：\t无此数\n");
    }

    return 0;
}
