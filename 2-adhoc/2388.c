#include <stdio.h>
#include <stdlib.h>

int getCarDistance(int t, int v) {
    int distance = t * v;

    return distance;
}

int main() {
    int testcases = 0;
    scanf("%d", &testcases);
    int t;
    int v;
    int count = 0;
    for (int i = 0; i < testcases; i++) {
        scanf("%d %d", &t, &v);
        count = count + getCarDistance(t, v);
    }
    printf("%d\n", count);

    return 0;
}
