#include <stdio.h>
int main(void) {
    int k;
    while (scanf("%d", &k) == 1 && k != 0) {
        int n, m;
        scanf("%d %d", &n, &m);

        for (int i = 0; i < k; i++) {
            int x, y;
            scanf("%d %d", &x, &y);

            if (x == n || y == m) {
                puts("divisa");
            } else if (x > n && y > m) {
                puts("NE");
            } else if (x > n && y < m) {
                puts("SE");
            } else if (x < n && y > m) {
                puts("NO");
            } else {
                puts("SO");
            }
        }
    }

    return 0;
}
