#include <stdio.h>

int main() {
  int flagIsSuficient = 0;
  int c, p, f;
  scanf("%d %d %d", &c, &p, &f);
  if ((c * f) <= p) {
    if (p % f == 0) {
      flagIsSuficient = 1;
    }
  }

  if (flagIsSuficient == 1)
    printf("S\n");

  if (flagIsSuficient == 0)
    printf("N\n");

  return 0;
}
