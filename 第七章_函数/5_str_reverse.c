#include <stdio.h>

int main()
{
    void reverse(char c[]);
    char c[] = "hellowoody";
    reverse(c);
    return 0;
}

void reverse (char c[])
{
    int i = 0;
    while (c[i] != '\0') {
        i++;
    }
    int j = (i-1) / 2, tmp;
    while (j>=0) {
        tmp = c[j];
        c[j] = c[i-j-1];
        c[i-j-1] = tmp;
        j--;
    }
    puts(c);
}
