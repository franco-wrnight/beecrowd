#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int numDays;
    int start;
    int lowest;
    scanf("%d %d", &numDays, &start);
    lowest = start;
    for (int i = 0; i < numDays; i++)
    {
        int newCount = 0;
        scanf("%d", &newCount);
        start = start + newCount;
        if (start < lowest)
        {
            lowest = start;
        }
    }

    printf("%d\n", lowest);

    return 0;
}
