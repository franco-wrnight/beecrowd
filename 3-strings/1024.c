#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAXLEN 10005

void firstEncryption(char *s)
{
    for (size_t i = 0; s[i] != '\0'; i++)
    {
        if (isalpha((unsigned char)s[i]))
            s[i] += 3;
    }
}

void secondEncryption(char *s)
{
    size_t len = strlen(s);
    char t[len + 1];

    for (size_t i = 0; i < len; i++)
        t[i] = s[len - 1 - i];

    t[len] = '\0';

    strcpy(s, t);
}

void thirdEncryption(char *s)
{
    size_t p = strlen(s) / 2;

    for (size_t i = p; s[i] != '\0'; i++)
        s[i]--;
}

int main()
{
    int tests;

    scanf("%d", &tests);
    getchar();

    for (int i = 0; i < tests; i++)
    {
        char s[MAXLEN];

        fgets(s, MAXLEN, stdin);
        s[strcspn(s, "\n")] = '\0';

        firstEncryption(s);
        secondEncryption(s);
        thirdEncryption(s);

        fputs(s, stdout);
        putchar('\n');
    }

    return 0;
}
