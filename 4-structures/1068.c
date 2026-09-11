#include <stdio.h>
#include <string.h>
#define MAXLEN 1024
#define MAXTESTS 10005

int izqPar = 0;
int derPar = 0;

void procedureCheckLine(char *s) {
    int balance = 0;

    for (int i = 0; s[i] != 0; i++) {
        if (s[i] == '(') {
            balance++;
            continue;
        }
        if (s[i] == ')') {
            balance--;
            if (balance < 0) {
                derPar = 1;
                break;
            }
        }
    }
    izqPar = balance;
}
int main() {
    char line[MAXLEN];
    while (fgets(line, MAXLEN, stdin) != NULL) {
        izqPar = 0;
        derPar = 0;
        procedureCheckLine(line);
        if (izqPar == 0 && derPar == 0) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
    }

    return 0;
}
