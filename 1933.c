#include <stdio.h>
#include <limits.h>
int solution(int a, int b)
{
    int maxCard = 1;
    if (a >= 1 && b >= 1)
    {

        if (a > maxCard)
        {
            maxCard = a;
        }
        if (b > maxCard)
        {
            maxCard = b;
        }

        if (a > b)
        {
            maxCard = a;
        }
    }
    return maxCard;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", solution(a, b));
}
