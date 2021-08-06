#include <stdio.h>

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int arr[], int n, int i) {
  if (i >= n - 1) return;

  int minElementIndex = i;

  for (int j = i + 1; j < n; j++)
    if (arr[j] < arr[minElementIndex]) minElementIndex = j;

  swap(&arr[minElementIndex], &arr[i]);

  selectionSort(arr, n, i + 1);
  return;
}

int main() {
  int arr[] = {8, 7, 5, 3, 1};
  selectionSort(arr, 5, 0);

  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}