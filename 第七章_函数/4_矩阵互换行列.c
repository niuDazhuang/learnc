#include <stdio.h>

#define M 3
#define N 3

int main()
{
    void convert(int a[][N]);

    int a[M][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    convert(a);
    
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void convert (int a[][N])
{
    int i, j, tmp;
    for (i = 0; i < M; i++) {
        for (j = i + 1; j < N; j++) {
            tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
    }
}
