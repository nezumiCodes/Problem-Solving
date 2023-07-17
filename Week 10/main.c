#include "sort.h" // We will discuss this in the next lecture, essentially it embeds the sort function from the other file to the main one, so it can be called.
#include <stdio.h>

// Defining function
// We write custom functions OUTSIDE of the main one, usually on TOP of the
// main. Functions are defined outside of the main programme, the main function
// cannot read its contents. So if we want to access an element/variable
// calculated inside of the custom function, we need to return it.
// datatype_of_return name_of_function(datatype_of_parameter name_of_parameter)
// {}

float calculateDiscount(int packages) {
  float discount;

  if (packages < 10) {
    discount = 0.0;
  } else if (packages < 20) {
    discount = 10.0;
  } else {
    discount = 20.0;
  }
  printf("Discount is %.2f\n", discount);

  return discount; // this is the value that will be visible by the main
                   // function
}

int main(void) {
  int packages = 20;
  float discount1;
  // Variables are defined uniquely inside of each function. Meaning that if you
  // have a variable called 'var' inside of main and variable called also 'var'
  // inside of a custom function, these are NOT the same.

  // In order to read the return of a custom function, we need to store/save it
  // in a variable within our main programme
  discount1 =
      calculateDiscount(packages); // We call a function by its name, and give
                                   // any parametes if necessary
  printf("%f \n", discount1);

  sort(); //execute sorting function
  return 0;
}