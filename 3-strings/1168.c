#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const int ledsValue[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int parsingStringtoInt(char *arr)
{

    int totalSumOfLEDS = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        int digit = (arr[i] - '0');
        totalSumOfLEDS += ledsValue[digit];
    }
    return totalSumOfLEDS;
}

int main()
{
    int T;
    scanf("%d", &T);
    char *leds[1005];

    for (int i = 0; i < T; i++)
    {
        leds[i] = malloc(sizeof(char) * 105);
        scanf("%s", leds[i]);
        int stoi = parsingStringtoInt(leds[i]);
        printf("%d leds\n", stoi);
        free(leds[i]);
    }

    return 0;
}
