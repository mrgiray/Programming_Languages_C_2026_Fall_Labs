#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  // TODO: compute factorial iteratively
  long long sum = 1;
  int i;
  for (i = 1; i <= n; i++) {
    sum = sum * i;
  }
  return sum;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("n must be at least 0!\n");
  } else {
    long long factoral = factorial(n);
    printf("factoral = %lld\n", factoral);
  }

  // TODO: validate input, call function, print result

  return 0;
}
