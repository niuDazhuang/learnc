#include <stdio.h>
#define LEN 10

int main() {
    int i, j, upp, low, dig, spa, oth;
    upp = low = dig = spa = oth = 0;
    // char text[3][LEN] = {"1234567890", "qwertyuiop", ",.;'][-098"};
    char text[3][LEN];
    char letter;
    for (i = 0; i < 3; i++) {
        printf("文章第%d行：\n", i + 1);
        gets(text[i]);
    }

    for (i = 0; i < 3; i++) {
       for (j = 0; j < 10 && text[i][j] != 0; j++)
       {
           letter = text[i][j];
           if (letter >= 'A' && letter <= 'Z') {
               upp++;
           } else if (letter >= 'a' && letter <= 'z') {
               low++;
           } else if (letter >= '0' && letter <= '9') {
               dig++;
           } else if (letter == ' ') {
               spa++;
           } else {
               oth++;
           }
       }
    }

    printf("upp:%8d\n", upp);
    printf("low:%8d\n", low);
    printf("dig:%8d\n", dig);
    printf("spa:%8d\n", spa);
    printf("oth:%8d\n", oth);

    return 0;
}
