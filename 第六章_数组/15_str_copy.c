#include <stdio.h>

#define LEN 20

int main() {
    int i = 0;
    char s1[LEN] = "something else";
    char s2[] = "hello wOOdy";

    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];

    puts(s1);
    
    return 0;
}
