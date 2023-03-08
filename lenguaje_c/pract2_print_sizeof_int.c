#include <stddef.h>
#include <stdio.h>

int main() {
  int a = 117;
  size_t sizeof_int = sizeof(int);
  int *pta = &a;
  size_t sizeof_p = sizeof(pta);
  printf("a vale %d, sizeof(int) es %lu, pta apunta a %p y sizeof(puntero) es "
         "%lu\n",
         a, sizeof_int, pta, sizeof_p);
  return 0;
}
