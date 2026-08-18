#include <stdio.h>
short flagIsN = 0;

int applyFormulaForDominos(int n)
{

    long result = 0;
    if (n >= 1)
    {
        flagIsN = 1;
        result = ((n + 1) * (n + 2)) / 2;
    }
    return result;
}
int main(void)
{
    int input;
    scanf("%d", &input);
    printf("%d\n", applyFormulaForDominos(input));
}
