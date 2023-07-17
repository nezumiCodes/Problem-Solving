#include <stdio.h>

int main(void) {
  int var = 5;
  // Create an array: data-type array_name[size];
  // The size of an array CANNOT be changed in the program

  // Array of name int_arr, data-type int, that stores size=10 elenents
  int int_arr[10];
  // Array of name float_arr, data-type float, that stores size=5 elenents
  float float_arr[5];
  // Array of name char_arr, data-type char, that stores size=15 elenents
  char char_arr[15];

  // Change the value at INDEX 3
  int_arr[3] = 100;
  // IF you wanted to change the THIRD element of the array
  // then would need to write: int_arr[2] = 100;
  // REMEMBER: Index = Position_in_Array - 1;

  // Change the value at Index 7 as 50
  int_arr[7] = 50;
  // Change the value of the 7th Element to 60
  int_arr[6] = 60;

  // Printing Loop
  // Indexing in C starts from 0, and ends at size-1
  // In for loops you can write either:
  // for(i=0; i<size; i++) {....}
  // OR
  // for(i=0; i<=size-1, i++) {....}
  int i;
  for (i = 0; i < 10; i++) {
    printf("Element index %d value %d \n", i, int_arr[i]);
  }

  // Create an array with initial values
  // The size of an inialised array is equal to the total amount of elements we
  // specify
  int numbers[] = {1, 2, 3, 4, 5, 6, 7};

  // In C, size is about the space that an element occupies in the memory.
  // Length is about how many elements exist in an array.
  // How to get the Length of an array:
  size_t num_size = sizeof(numbers) / sizeof(numbers[0]);
  printf("Size/Length of numbers array: %d \n", num_size);

  for (i = 0; i < num_size; i++) {
    printf("Element index %d value %d \n", i, numbers[i]);
  }

  int elem_pos, elem_value;
  printf("Select position in array (1-7) to be changed: ");
  scanf("%d", &elem_pos);
  printf("\n Select value: ");
  scanf("%d", &elem_value);

// index = position - 1
  numbers[elem_pos - 1] = elem_value;

  for (i = 0; i < num_size; i++) {
    printf("\nElement index %d value %d \n", i, numbers[i]);
  }

  int results[] = {1,2,3,4,5,6,7,8,9,10};
  int sum=0;

  for(i=0; i<10; i++) {
    // same as: sum = sum + results[i];
    sum += results[i];
  }
  printf("Sum of all elements = %d\n", sum);
  printf("Average of all elements = %d\n", sum/10);

  /////////////////////////////////////////////////////////

  char expId[4];
  float res[4];

  for(i=0; i<4; i++) {
    printf("%d - Give the experiment ID: \n",i+1);
    scanf("%s", &expId[i]);

    int ch;
    while((ch=getchar())!='\n' && ch!=EOF);
    
    printf("%d - Give the result: \n",i+1);
    scanf("%f", &res[i]);

    //printf("The result of experiment %c is %.2f",expId[i],res[i]);
  }
  

  for(i=0; i<4; i++) {
    printf("The result of experiment %c is %.2f.\n", expId[i],res[i]);
  }
  
  
}