#include <stdio.h>

void insertion_sort_asc(int *arr, int size);
void insertion_sort_dec(int *arr, int size);

int main() {
  int a[] = {31, 41, 59, 26, 41, 58};
  insertion_sort_asc(a, 6);

  for (int x = 0; x < 6; x++) {
    printf("%d\t", a[x]);
  }

  printf("\n");

  insertion_sort_dec(a, 6);
  for (int x = 0; x < 6; x++) {
    printf("%d\t", a[x]);
  }

  return 0;
}

// increasing order

void insertion_sort_asc(int *arr, int size) {

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

// decreasing order

void insertion_sort_dec(int *arr, int size) {

  int i, j, aux;

  for (i = 1; i < size; i++) {
    aux = arr[i];
    j = i - 1;

    while (j >= 0 && aux > arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = aux;
  }
}
