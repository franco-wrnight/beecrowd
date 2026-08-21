#include <stdio.h>
#include <stdlib.h>
int main() {

  int n;
  scanf("%d", &n);
  int *arr = malloc(sizeof(int) * n);
  int arrFind = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    if (arr[i] != arr[i + 1]) {
      arrFind++;
    }
  }

  free(arr);
  printf("%d\n", arrFind);
  return 0;
}

