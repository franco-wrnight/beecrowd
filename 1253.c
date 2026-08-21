#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXLEN 55

void cipherFoo(char *s, int shift)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(isalpha(s[i]) == true){
            
        }
    }
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    while (n--)
    {
        char s[MAXLEN];
        int shift;

        scanf("%s", s);
        scanf("%d", &shift);

        cipherFoo(s, shift);
        printf("%s\n", s);
    }
    return 0;
}
