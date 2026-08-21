#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maiorab = (a + b + abs(a - b));
    int result = maiorab / 2;

    printf("%d eh o maior\n", result);
    return 0;
}
