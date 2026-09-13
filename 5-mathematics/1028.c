#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void) {
    long test_cases;
    scanf("%ld", &test_cases);
    int f1, f2 = 0;
    for (int i = 0; i < test_cases; i++) {
        scanf("%d %d", &f1, &f2);
        // operar
        printf("%d\n", gcd(f1, f2));
    }
    return 0;
}
