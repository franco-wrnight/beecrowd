#include <stdio.h>
#define MAXLEN 105

int main()
{
    int tests;
    scanf("%d", &tests);
    while (tests--)
    {
        char result[MAXLEN];
        char s[MAXLEN];
        char t[MAXLEN];
        scanf("%s %s", s, t);

        int i = 0, j = 0, k = 0;

        while (s[i] != '\0' || t[j] != '\0')
        {
            if (s[i] != '\0')
            {
                result[k] = s[i];
                k++;
                i++;
            }
            if (t[j] != '\0')
            {
                result[k] = t[j];
                k++;
                j++;
            }
        }
        result[k] = '\0';
        printf("%s", result);
    }
}
