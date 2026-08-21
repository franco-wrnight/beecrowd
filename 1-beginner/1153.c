#include <stdio.h>

int main()
{

  long fact = (long)1;
  long N = (long)0;
  scanf("%ld", &N);
  for (int i = 1; i < N + 1; i++)
  {
    fact = fact * i;
  }

  printf("%ld\n", fact);
  return 0;
}
