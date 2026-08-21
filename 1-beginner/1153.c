#include <stdio.h>

int main() {
  // the maximum case is 13 so:
  long fact = 1;
  int N;
  scanf("%d", &N);
  for (int i = 1; i < N + 1; i++) {
    fact = fact * i;
  }

  printf("%d\n", fact);
  return 0;
}
