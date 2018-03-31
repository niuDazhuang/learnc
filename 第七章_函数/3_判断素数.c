#include <stdio.h>
#include <math.h>

int main()
{
    int isPrime(int a);
    
    int a;
    printf("a(非0整数):");
    scanf("%d", &a);
    if (isPrime(a) == 0) {
        printf("是素数\n");
    } else {
        printf("非素数\n");
    }
    return 0;
}

int isPrime (int a)
{
    if (a == 1) return 1;
    for (int i = 2; i < sqrt(a); i++)
        if (a % i == 0)
            return 1;
    return 0;
}
