#include <stdio.h>

int main()
{
    int isabc(char ch);
    int chooseLongest(char c[]);
    char c[] = "herrrl woody";
    for (int i = chooseLongest(c); isabc(c[i]) == 1; i++) {
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}

int isabc (char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        return 1;
    } else {
        return 0;
    }
}

int chooseLongest (char c[])
{
    int i = 0, start = 0, sta = 0, length = 0, len = 0, flag = 1;
    do {
        if (isabc(c[i])) {
            if (flag == 1) {
                flag = 0;
                sta = i;
                len = 1;
            } else {
                len++;
            }
        } else {
            flag = 1;
            if (length <= len) {
                length = len;
                start = sta;
            }
        }
        i++;
    } while (c[i-1] != '\0');
    return start;
}
