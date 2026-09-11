#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 200
int valuesFreq[27];
int max = 0;

void countFrequencyProcedure(char *s, int *values) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            int idx = tolower(s[i]) - 'a';  // detectar el indice y restar valor ascii
            values[idx]++;                  // añadir ocurrencia de letra
            if (values[idx] > max) {
                max = values[idx];
            }
        }
    }
}

int main(void) {
    char *line = NULL;
    size_t size = 0;
    int testcases = 0;
    scanf("%d", &testcases);
    getline(&line, &size, stdin);
    for (int t = 0; t < testcases; t++) {
        if (getline(&line, &size, stdin) != EOF) {
            int valuesFreq[27] = {0};
            max = 0;
            countFrequencyProcedure(line, valuesFreq);
            for (int i = 0; i < 26; i++) {
                if (valuesFreq[i] == max) {
                    fputc('a' + i, stdout);
                }
            }
            printf("\n");
        }
    }
    free(line);

    return 0;
}
