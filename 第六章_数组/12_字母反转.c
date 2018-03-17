#include <stdio.h>

#define LEN 20

int main() {
    int i = 0;

    char text[LEN] = {"hello Woody"}, letter;

    const int upp = 'Z' + 'A';
    const int low = 'z' + 'a';
    
    printf("upp:%d, low:%d", upp, low);

//    printf("输入文本：");
//    gets(text);

    while (text[i] != '\0') {
        letter = text[i];
        if (letter >= 'A' && letter <= 'Z') {
            text[i] = upp - letter;
        } else if (letter >= 'a' && letter <= 'z') {
            text[i] = low - letter;
        }
        i++;
    }
    printf("\n加密后：");
    printf("%s", text);

    i = 0;
    while (text[i] != '\0') {
        letter = text[i];
        if (letter >= 'A' && letter <= 'Z') {
            text[i] = upp - letter;
        } else if (letter >= 'a' && letter <= 'z') {
            text[i] = low - letter;
        }
        i++;
    }
    printf("\n再解密：");
    printf("%s", text);
    
    printf("\n");

    return 0;
}
