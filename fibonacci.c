#include <stdio.h>

void printFibonacci3rd(int a, int b, int n) {
  if (n <= 0) return;

  int i = 3;
  while (i--) {
    int c = a + b;
    a = b;
    b = c;
  }

  printf("%d ", b);

  return printFibonacci3rd(a, b, n - 1);
}

void printFibonacci(int n) {
  if (n < 1) return;

  int a = 1, b = 1;
  printf("%d ", a + b);
  printFibonacci3rd(b, a + b, n - 1);
}

int main() {
  int n;
  scanf("%d", &n);

  printFibonacci(n);

  return 0;
}