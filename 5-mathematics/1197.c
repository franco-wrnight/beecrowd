#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int p_i = 0;
    int p_t = 0;
    while (scanf("%d %d", &p_i, &p_t) == 2) {
        printf("%d\n", 2 * p_i * p_t);
    }
    return 0;
}
