#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str1[35];
    char str2[35];

    while (scanf("%34s %34s", str1, str2) == 2) {
        unsigned long val1 = strtoul(str1, NULL, 2);
        unsigned long val2 = strtoul(str2, NULL, 2);

        if (val1 > val2) {
            printf("%s\n", str1);
        } else {
            printf("%s\n", str2);
        }
    }

    return 0;
}
