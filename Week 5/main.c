#include <stdio.h>

int main(void) {

  // flag=0 for non-prime numbers, flag=1 for prime numbers
  int x, y, z, flag, rows=5, num=2;

  
  // outer loop for counting rows
  for(x = 0; x <= rows; x++) {
    // inner loop for counting columns per row
    for(y=0; y <= x; y++) {
      //while(1) will keep running until we forcefully break from it
      // helps check all prime numbers and avoid even numbers
      while(1) {
        // inner loop z for checking prime values
        for(z=2; z < num; z++) {
          if(num%z != 0) {
            flag = 1;
          } else {
            flag = 0;
            break;
          } 
        }
  
        if( flag == 1 || num == 2) {
          printf("%d ", num);
          num++; // num = num + 1 ==> num+=1
          // OR in one line : printf("%d ", num++);
          break;
        } else{
          num++;
          flag = 0;
        }
      } 
    }
    printf("\n");
  }
  

  printf("\n\n\nImplementation with FOR loops...\n\n\n");

  int count=0, sum_pr=0, sum_all=0, prod_pr=1;
  // outer loop x for counting rows, and x also acts as the number to check if is prime or not
  for(x=1; x <= rows; x++) {
    flag = 1;
    // inner loop y for counting columns, and y divides x to find if x is prime or not.
    // y starts from 2, and ends at the value x-1
    for(y=2; y < x; y++) {
      if(x%y == 0) {
        flag = 0;
        break;
      }
    }

    sum_all += x; // sum_all = sum_all + x;
    if(flag == 1 && x != 1) {
      count++;
      sum_pr += x; // sum_pr = sum_pr + x;
      prod_pr *= x; // prod_pr = prod_pr * x;
      for(z=1; z <= count; z++) {
        printf("%d ", x);
      }
      printf("\n");
    }
    
  }
  
  printf("\nSum of prime numbers: %d\n", sum_pr);
  printf("Product of prime numbers: %d\n", prod_pr);
  printf("Sum of all numbers: %d\n", sum_all);

  printf("\n\n\nImplementation with WHILE loops...\n\n\n");

    count = 0;
    x = 1;
    while(x <= rows) {
      flag = 1;
      // inner loop y for counting columns, and y divides x to find if x is prime or not.
      // y starts from 2, and ends at the value x-1
      y=2;
      while(y < x) {
        if(x%y == 0) {
          flag = 0;
          break;
        }
        y++;
      }

    sum_all += x; // sum_all = sum_all + x;
    if(flag == 1 && x != 1) {
      count++;
      sum_pr += x; // sum_pr = sum_pr + x;
      prod_pr *= x; // prod_pr = prod_pr * x;
      for(z=1; z <= count; z++) {
        printf("%d ", x);
      }
      printf("\n");
    }
    x++;
  }
  return 0;
}