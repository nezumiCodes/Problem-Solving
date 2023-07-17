#include <stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int count = 0;
  int isPrime;

  // Find and display prime numbers in a right-angle triangle pattern
  for (int i = 2; i <= n; i++) {
      int isPrime = 1; // Suppose the current number is prime
      for (int j = 2; j < i; j++) {
          if (i % j == 0) { // If division with another number is whole, then it's not prime
              isPrime = 0;
              break;
          }
      }
      if (isPrime) {
          for (int k = 0; k <= count; k++) { // Based on count, print the number 'count' times
              printf("%d ", i);
          }
          printf("\n");
          // increase count, DO NOT zero it out, this keeps track of how many times a prime number will be printed
          // first prime num will be printed once, second prime will be printed twice, etc.
          count++; 
      }
  }
  return 0;
}
