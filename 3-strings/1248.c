#include <stdio.h>
#include <string.h>

void solve() {
    char dieta[30], desayuno[30], almuerzo[30];
    int freq[26] = {0};
    int cheater = 0;

    fgets(dieta, sizeof(dieta), stdin);
    fgets(desayuno, sizeof(desayuno), stdin);
    fgets(almuerzo, sizeof(almuerzo), stdin);

    for (int i = 0; dieta[i] != '\0' && dieta[i] != '\n'; i++) {
        freq[dieta[i] - 'A']++;
    }

    for (int i = 0; desayuno[i] != '\0' && desayuno[i] != '\n'; i++) {
        int idx = desayuno[i] - 'A';
        freq[idx]--;
        if (freq[idx] < 0) {
            cheater = 1;
        }
    }

    for (int i = 0; almuerzo[i] != '\0' && almuerzo[i] != '\n'; i++) {
        int idx = almuerzo[i] - 'A';
        freq[idx]--;
        if (freq[idx] < 0) {
            cheater = 1;
        }
    }

    if (cheater) {
        printf("CHEATER\n");
    } else {
        for (int i = 0; i < 26; i++) {
            while (freq[i] > 0) {
                printf("%c", i + 'A');
                freq[i]--;
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    char buffer[10];
    if (fgets(buffer, sizeof(buffer), stdin)) {
        sscanf(buffer, "%d", &n);
        while (n--) {
            solve();
        }
    }
    return 0;
}
