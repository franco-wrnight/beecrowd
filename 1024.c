#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAXLEN 1005

int firstFunc(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isupper(s[i]) || islower(s[i]))
        {
            s[i] = s[i] + 3;
        }
    }
    return *s;
}

void secondFunc(char *s)
{
    char temp[MAXLEN];
    int last = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        temp[last] = s[i];
        last++;
    }
    temp[last] = '\0';

    strcpy(s, temp);
}

int thirdFunc(char *s)
{
    int half_len_s = strlen(s) / 2;
    for (int i = half_len_s; s[i] != '\0'; i++)
    {
        s[i] = s[i] - 1;
    }
    return *s;
}

int main(void)
{
    int t = 0;
    char line[1005];
    if (scanf("%d", &t) != 1)
    {
        return 0;
    }
    while (getchar() != '\n')
    {
        ;
    }

    while (t--)
    {
        if (fgets(line, sizeof(line), stdin) != NULL)
        {

            line[strcspn(line, "\n")] = '\0';

            firstFunc(line);
            secondFunc(line);
            thirdFunc(line);

            printf("%s\n", line);
        }
    }

    return 0;
}
