#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAXLEN 1024
void foo(char *s) {
    int ct = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha((unsigned char)s[i])) {
            if (ct % 2 == 0) {
                s[i] = (char)toupper((unsigned char)s[i]);
            } else {
                s[i] = (char)tolower((unsigned char)s[i]);
            }
            ct++;
        }
    }
}
int main() {
    char s[MAXLEN];

    while (fgets(s, MAXLEN, stdin) != NULL) {
        foo(s);
        fputs(s, stdout);
    }
}
