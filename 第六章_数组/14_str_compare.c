#include <stdio.h>

#define LEN 20

int main() {
    int i = 0, rst = 0;
    char c1[LEN], c2[LEN];
    printf("char1:");
    gets(c1);
    printf("char2:");
    gets(c2);

    while (c1[i] != '\0' || c2[i] != '\0') {
        rst = c1[i] - c2[i];
        i++;
        if (rst != 0) {
            break;
        }
    }

    printf("结果： %d", rst);
    printf("\n");
    
    return 0;
}
