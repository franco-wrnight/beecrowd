#include <stdio.h>
#include <string.h>
#define MAXLEN 1024
int main() {
    int n;
    char A[MAXLEN], B[MAXLEN];

    scanf("%d", &n);

    while (n--) {
        scanf("%s %s", A, B);
        int a = strlen(A);
        int b = strlen(B);

        if (b <= a && strcmp(A + a - b, B) == 0)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }

    return 0;
}
