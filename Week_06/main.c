#include <stdio.h>

int main(void) {

  char choice;

  printf("Please enter the letter which corresponds with your choice:\n");
  printf("a – Calculate the circumference of a circle\n");
  printf("b – Calculate the volume of a cube\n");
  printf("c – Display a multiplication table for any one number between 2-7\n");
  printf("d – Find the average of three numbers\n");
  printf("y - Exit program\n");

  scanf("%c", &choice);

  while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' &&
         choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D' &&
         choice != 'y' && choice != 'Y') {
    printf("Sorry, your choice is invalid. Please enter either a, b, c, d or "
           "y.\n\n");

    printf("\nPlease enter the letter which corresponds with your choice:\n");
    printf("a – Calculate the circumference of a circle\n");
    printf("b – Calculate the volume of a cube\n");
    printf(
        "c – Display a multiplication table for any one number between 2-7\n");
    printf("d – Find the average of three numbers\n");
    printf("y - Exit program\n");

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
      ;
    scanf("%c", &choice);
  }

  do {

    if (choice == 'a' || choice == 'A') {
      float rad, circ;
      printf("Please enter the radius of the circle (in cm): ");
      scanf("%f", &rad);

      circ = 2 * 3.14 * rad;
      printf("\nThe circumference of the circle is: %.2f.\n", circ);
    } else if (choice == 'b' || choice == 'B') {
      // scanf side
      // vol = side*side*side;
      // OR vol = pow(side,3); PLEASE DON'T USE IT
      // vol = side^3; IS WRONG!!!
    } else if (choice == 'c' || choice == 'C') {
      int num, i, mul;
      printf("Please enter a number between 2 and 7: ");
      scanf("%d", &num);
      // Implement while loop to check if num is indeed between 2-7. If not ask
      // again for user input.

      for (i = 1; i <= 10; i++) {
        mul = num * i;
        printf("\n%d x %d = %d", num, i, mul);
      }
    } else if (choice == 'd' || choice == 'D') {
      // ask for user inputs for all 3 numbers
      // define num1,num2,num3 as floats
      // avg = (num1+num2+num3)/3.0
    } else {
      break;
    }

    printf("\nPlease enter the letter which corresponds with your choice:\n");
    printf("a – Calculate the circumference of a circle\n");
    printf("b – Calculate the volume of a cube\n");
    printf(
        "c – Display a multiplication table for any one number between 2-7\n");
    printf("d – Find the average of three numbers\n");
    printf("y - Exit program\n");

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
      ;
    scanf("%c", &choice);

    while (choice != 'a' && choice != 'A' && choice != 'b' && choice != 'B' &&
           choice != 'c' && choice != 'C' && choice != 'd' && choice != 'D' &&
           choice != 'y' && choice != 'Y') {
      printf("Sorry, your choice is invalid. Please enter either a, b, c, d or "
             "y.\n\n");

      printf("\nPlease enter the letter which corresponds with your choice:\n");
      printf("a – Calculate the circumference of a circle\n");
      printf("b – Calculate the volume of a cube\n");
      printf("c – Display a multiplication table for any one number between "
             "2-7\n");
      printf("d – Find the average of three numbers\n");
      printf("y - Exit program\n");

      int ch;
      while ((ch = getchar()) != '\n' && ch != EOF)
        ;
      scanf("%c", &choice);
    }

  } while (choice != 'y' && choice != 'Y');

  return 0;
}