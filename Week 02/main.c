#include <stdio.h>
#include <stdbool.h>

int gl_int = 5;

int main(void) {

  printf("This is a global variable: %d \n", gl_int);
  
  // int, float, double, char
  int a = 7;
  printf("Integer variable = %d \n", a);

  float b = 6.745645;
  printf("Float variable = %f \n", b);

  double d = 789.456;
  printf("Double variable = %f \n", d);
  
  char c = '5';
  printf("Character variable = %c \n", c);

  char e = 'hegrtg';
  printf("Character variable = %c \n", e);

  int my_int;
  my_int = 2;
  printf("my_int variable = %d \n", my_int);


  char firstLetter;
  char lastLetter;

  printf("Please enter the first letter:  ");
  scanf("%c", &firstLetter);
  printf("firstLetter before check: %c \n", firstLetter);
  
  int ch;
  while((ch = getchar()) != '\n' && ch != EOF);

  printf("firstLetter after check: %c \n", firstLetter);
  
  printf("Please enter the last letter:  ");
  scanf("%c", &lastLetter);

  while((ch = getchar()) != '\n' && ch != EOF);

  //================================================================//

  // We use = (single) whenever we want to store a value in a   variable
  int status = 2;
  
  // We use == (double) whenever we want to check for equality
  
  if(status == 1) { //if(condition)
    //code that executes when the condition is met / is True
    //will run the code between the curly brackets
    printf("You only see this message if status is equal to 1.\n");
  }
  else if(status == 2) { //if the first condition is not met, check for this one
    printf("You only see this message if status is equal to 2.\n");
  } 
  else if(status == 3) {
    printf("You only see this message if status is equal to 3.\n");
  }
  else if(status == 4) {
    printf("You only see this message if status is equal to 4.\n");
  }
  else {
    //code executes when the condition is NOT met / is False
    printf("You will only see this message if status it has NOT met any of the previous conditions. \n");
  }


  int age = 27;

  if(age < 50) {
    printf("You are below 50.\n");
  } else if(age < 30) {
    printf("You are above 20, but below 30.\n");
  } else if(age < 40) {
    printf("You are above 30, but below 40.\n");
  } else {
    printf("You are above 40.");
  }

  // Play around with these values to check your IF outputs
  float height = 4.0;
  age = 11;

  // LOGICAL OPERATORS: 
  // (AND) The condition will be met if BOTH of the sub-conditions are TRUE
  // && --> AND
  // (OR) The condition will be met if AT LEAST ONE of the sub-conditions is TRUE
  // || --> OR 
  if( (height > 5.0) || (age > 12) ) {  //Change the LOGICAL OPERATOR here
    printf("You can ride the rollercoaster.\n");
  } else {
    printf("You can't ride the rollercoaster.\n");
  }

  bool flag = 0;
  
  
  printf("You will always see this message");

  // vasiliki.nikolaidi@qa.com
  
}
