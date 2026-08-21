#include <stdio.h>
#include <stdlib.h>

int convertToMinutes(int initHour, int initMin,
                     int finalHour, int finalMin)
{
    int playTimeInMinutes = 0;
    int initMinutes = initHour * (int)60 + initMin;
    int finalMinutes = finalHour * (int)60 + finalMin;

    playTimeInMinutes = finalMinutes - initMinutes;
    if (playTimeInMinutes == 0)
    {
        playTimeInMinutes = 1440;
    }
    if (playTimeInMinutes < 0)
    {
        playTimeInMinutes += 1440;
    }

    return playTimeInMinutes;
}

int main(void)
{
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int argh = convertToMinutes(h1, m1, h2, m2);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
           (argh / 60), (argh % 60));

    return 0;
}
