#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAXLINE 105
#define MAXSTR 55

int arrayHash(const char *s, int line) {
    int hash = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha((unsigned char)s[i])) {
            hash += (toupper((unsigned char)s[i]) - 'A') + line + i;
        }
    }

    return hash;
}

int main(void) {
    int n;
    scanf("%d", &n);

    for (int t = 0; t < n; t++) {
        int lines;
        int totalHash = 0;
        char buffer[MAXSTR];

        scanf("%d", &lines);

        for (int i = 0; i < lines; i++) {
            scanf(" %54s", buffer);
            totalHash += arrayHash(buffer, i);
        }

        printf("%d\n", totalHash);
    }

    return 0;
}
