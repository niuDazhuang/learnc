#include <stdio.h>
#include <math.h>

int main()
{
    void calc (float a, float b, float c);
    
    float a, b, c;
    printf("a(非0):");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    printf("c:");
    scanf("%f", &c);
    calc(a, b ,c);
    return 0;
}

void calc (float a, float b, float c)
{
    float flag = b * b - 4 * a * c;
    if (flag >= 0) {
        float left = -b / (2 * a), right =sqrt(flag) / (2 * a);
        printf("结果：[%.2f, %.2f]\n", left + right, left - right);
    } else {
        printf("结果：无根\n");
    }
}
