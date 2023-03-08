#include <stdio.h>
#define N1 10
#define N2 20

int sum(int a, int b) { return a + b; }

int main() {
  int n1 = N1;
  int n2 = N2;
  int res = sum(n1, n2);
  printf("La suma de %d y %d es %d\n", n1, n2, res);
  return 0;
}
