#include <stdio.h>
#define MAXLEN 8
int main()
{

  char c[MAXLEN];
  fgets(c, MAXLEN, stdin);

  int isLocated = 0;
  for (int i = 0; c[i] != '\0'; i += 2)
  {
    if (c[i] == '1' && i % 2 == 0 && i <= 1)
    {
      isLocated = i;
    }
    if (c[i] == '1' && i == 2)
    {
      isLocated = 1;
    }
  }

  printf("%d\n", isLocated);

  return 0;
}
