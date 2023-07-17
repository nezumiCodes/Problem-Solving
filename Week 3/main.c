#include <stdio.h>

int main(void) {
  int a = 3, b = 7, c;

  // Addition
  c = a + b;
  printf("a + b = %d\n", c);

  // Subtraction
  c = a - b;
  printf("a - b = %d\n", c);

  // Multiplication
  c = a * b;
  printf("a * b = %d\n", c);

  // Division
  float d;
  // Typecasting --> temporarily changes the data type of a variable
  //  (data_type) var_name
  d = (float)a / (float)b;
  printf("a / b = %.3f\n", d);

  //================================================================//

  int ans;

  ans = 1 * 10;
  printf("%d\n", ans);

  ans = 2 * 10;
  printf("%d\n", ans);

  ans = 3 * 10;
  printf("%d\n", ans);

  ans = 4 * 10;
  printf("%d\n", ans);

  ans = 5 * 10;
  printf("%d\n", ans);

  // FOR Loop
  int counter;
  // for(initial_value_of_counter; while_counter_meets_condition;
  // increase/decrease_counter)

  printf("Using FOR loop...\n");
  // counter++ ==> counter += 1 ==> counter = counter + 1
  // counter-- ==> counter -= 1 ==> counter = counter - 1
  // -- or ++ are only when we want to decrease/increase with a step of 1
  for (counter = 10; counter >= 1; counter -= 2) {
    // write code to be repeated
    ans = counter * 10;
    printf("for counter %d, ans = %d\n", counter, ans);
  }

  printf("After FOR loop counter = %d\n", counter);

  //======================================================//

  printf("Using WHILE loop...\n");

  counter = 1;
  // while(condition_is_met/is_True)
  //  Typical counter variable names: i, j, k, n, ...
  while (counter <= 5) {
    // write code to be repeated while condition is True / is met
    ans = counter * 10;
    printf("for counter %d, ans = %d\n", counter, ans);

    counter++;
  }

  int run = 1;

  /*
  // when for equality ALWAYS use == (double)
  // check for inequality !=
  while(run == 1) {
    printf("...Code that repeats...\n");

    printf("Please enter 1 if you want to continue: \n");
    scanf("%d", &run);
  }
  */

  //============================================================//

  printf("Using NESTED FOR loops...\n");

  /*
  Create a half pyramid:
  *
  * *
  * * *
  * * * *
  * * * * *

  *|  |  |  |  |
  --------------
  *| *|  |  |  |
  --------------
  *| *| *|  |  |
  --------------
  *| *| *| *|  |
  --------------
  *| *| *| *| *|

  */

  int i, j, rows = 5;

  for (i = 1; i <= rows; i++) {

    for (j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  /*
  Create an inverted half pyramid:
  * * * * *
  * * * *
  * * *
  * *
  *

  */
  printf("\n");

  for (i = rows; i >= 1; i--) {

    for (j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  /*

  Create a full pyramid:
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
  */
  printf("\n");

  int space, k;

  for (i = 1; i <= rows; i++, k = 0) {

    for (space = 1; space <= rows - i; space++) {
      printf("  ");
    }

    while (k != 2 * i - 1) {
      printf("* ");
      k++;
    }

    printf("\n");
  }
}
