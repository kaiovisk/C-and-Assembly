#include <stdio.h>

void insertion_sort(int *arr, int size);

int main() {
  int a[] = {2, 1, 0, 6, 4};
  insertion_sort(a, 5);

  for (int x = 0; x < 5; x++) {
    printf("%d\n", a[x]);
  }
}

void insertion_sort(int *arr, int size) {

  int i, j, aux;

  for (i = 1; i < size; i++) {
    aux = arr[i];
    j = i - 1;

    while (j >= 0 && aux < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = aux;
  }
}
