#include <stdio.h>

int main(void)
{
    int n, m;
    char a[10];

    scanf("%d %d", &n, &m);

    while (m--) {
        scanf("%s", a);
        n += (a[0] == 'f') ? 1 : -1;
    }

    printf("%d\n", n);
}
