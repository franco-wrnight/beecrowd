#include <stdio.h>
#include <string.h>
#include <limits.h>
#define MAXLEN 1024

void removeSpaces(char *s)
{

    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int combineStrings(char *s, char *t)
{
    removeSpaces(s);
    removeSpaces(t);
    
}
