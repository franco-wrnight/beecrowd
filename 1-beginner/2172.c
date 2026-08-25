#include <stdio.h>

int main() {
    int       a;
    long long b;
    while (scanf("%d %llu", &a, &b) && a != 0 && a >= 10) {
        long long mul = a * b;
        printf("%llu\n", mul);
    }
    return 0;
}
