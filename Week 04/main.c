#include <stdio.h>

int main(void) {
  int unit_price = 79, packages;
  float cost, discount;


  printf("Enter the number of packages purchased: \n");
  scanf("%d", &packages);

  // While loops that checks for valid values of the a variable
  // THIS PART IS NOT REQUIRED BY ASSESSMENT 2
  while(packages<1) {
    printf("Please enter a positive amount of packages.\n");
    printf("Enter the number of packages purchased: \n");
    scanf("%d", &packages);
  }

  /*
  if(packages<10) {
    discount = 0.0;
  } else if(packages<20) {
    discount = 0.1;
  } else if(packages<50) {
    discount = 0.2;
  } else if(packages<100) {
    discount = 0.3;
  } else {
    discount = 0.4;
  }
  */

  /*
  Structure of switch-case:

    switch(var_to_be_checked) {
      case 1:
        break;
      case 2:
        break;
          .
          .
          .
      default:
    }
  */
  
  switch(packages) {
    case 1 ... 9:
      discount = 0.0;
      break;
    case 10 ... 19:
      discount = 0.1;
      break;
    case 20 ... 49:
      discount = 0.2;
      break;
    case 50 ... 99:
      discount = 0.3;
      break;
    default:
      discount = 0.4;
  }

  // ATTENTION! In assessment 2 the calculation of cost is WRONG.
  // cost = unit_price*packages*(1-discount);
  cost = unit_price*packages - unit_price*packages*discount;

  printf("The discount applied (if any): %.1f %\n", discount*100);
  printf("The cost to be paid is: %.2f\n", cost);


  //==============================================================//

  // Checking if a number is prime or not

  // set flag=0 for non-primes and flag=1 for prime
  int n = 100, flag, i, j;

  if (n < 2) {
    flag = 0;
  } else {

    for (i = 2; i <= n; i++) {
      int x = i / 2;
      flag = 1;

      for (j = 2; j <= x; j++) {
        if (i % j == 0) {
          flag = 0;
        }
      }

      if (flag == 0) {
        printf("%d is NOT a prime number.\n", i);
      } else {
        printf("%d is a prime number.\n", i);
      }
    }
  }

  /*
  The do-while loop gets executed at least once, because the condition checking is done at the end, so they program doesn't yet know the 'limit' value.
On the other hand, the while loop checks the condition at the top, and if doesn't meet it, it will never enter the loop.
  do{


  } while(condition)

  i = 2;
  do {

    i++;
  } while(i<=n)
--------------------------
  i = 2;
  while(i<=n) {
    
    i++;
  }

  */

  return 0;
}