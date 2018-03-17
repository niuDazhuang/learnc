#include <stdio.h>

#define LEN 20

int main() {
    int i = 0, j = 0;
    char c1[] = "hello",
        c2[] = "woody";
    
    while (c1[i] != '\0') i++;
    while (c2[j] != '\0') j++;

    char rst[i + j + 1];

    i = 0;
    j = 0;
    while (c1[i] != '\0') {
        rst[i] = c1[i];
        i++;
    }
    while (c2[j] != '\0') {
        rst[i + j] = c2[j];
        j++;
    }

    printf("%s\n", rst);
    
    return 0;
}
