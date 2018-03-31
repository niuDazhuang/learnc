#include <stdio.h>

int main()
{
    int getGCD(int, int);
    int getLCM(int, int);
    printf("%d\n%d\n", getGCD(63, 98), getLCM(15, 25));
    return 0;
}

// 最大公约数-辗转相除法
int getGCD (int a, int b)
{
    int rst = a%b;
    return rst == 0 ? b : getGCD(b, rst);
}

// 最小公倍数
int getLCM (int a, int b)
{
    return a*b / getGCD(a, b);
}
