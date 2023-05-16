#include <assert.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TIMEIT(e)                                                              \
  do {                                                                         \
    clock_t t0 = clock(), diff;                                                \
    e;                                                                         \
    diff = clock() - t0;                                                       \
    double ms = (double)diff / CLOCKS_PER_SEC;                                 \
    printf("Execution took %f seconds\n", ms);                                 \
  } while (0)

long long unsigned oddSumOn(long long unsigned n); // Versión O(n).
long long unsigned oddSumO1(long long unsigned n); // Versión O(1).

int main(void) {
  setlocale(LC_NUMERIC, "");
  long long unsigned rn, r1;
  long long unsigned test_cases[] = {1e2, 1e3, 1e4, 1e5, 1e6,
                                     1e7, 1e8, 1e9, 1e10};
  for (size_t test_idx = 0;
       test_idx < sizeof(test_cases) / sizeof(long unsigned); test_idx++) {
    long long unsigned test_case = test_cases[test_idx];
    printf("Testing case for n=%'llu\n", test_case);
    printf("O(n) implementation: ");
    TIMEIT(rn = oddSumOn(test_case));
    printf("O(1) implementation: ");
    TIMEIT(r1 = oddSumO1(test_case));
    printf("Results: %llu (O(n)) %llu (O(1))\n\n", rn, r1);
    assert(rn == r1);
  }
  printf("All tests passed!\n");
  return EXIT_SUCCESS;
}

long long unsigned oddSumOn(long long unsigned n) {
  long long unsigned sum = 0;
  for (long long unsigned i = 1; i < n; i += 2) {
    sum += i;
  }
  return sum;
}

long long unsigned oddSumO1(long long unsigned n) {
  long long unsigned oddNumbers = n / 2;
  return oddNumbers * oddNumbers;
}
