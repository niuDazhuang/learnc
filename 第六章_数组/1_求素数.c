#include <stdio.h>
#include <math.h>

int main()
{
  int a[101];
  for (int i = 2; i <= 100; i++) {
    a[i] = i;
    for (int j = 2; j <= sqrt(i); j++) {
      if (i%j == 0) {
        a[i] = 0;
        break;
      }
    }
  }
  for (int i = 2, n = 0; i <= 100; i++) {
    if (a[i] != 0) {
      printf("%5d", a[i]);
      n++;
    }
    if (n%10 == 0) {
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}
