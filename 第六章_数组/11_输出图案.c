#include <stdio.h>

#define LEN 10

int main() {
    char i, j, space[LEN] = {' '};
    
    for (i = 0; i < LEN; i++) {
        for(j = 0; j < LEN; j++) {
            printf("%5c", '*');
        }
        space[i] = ' ';
        printf("\n%s", space);
    }
    
    printf("\n");

    return 0;
}
