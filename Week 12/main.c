#include <stdio.h>

float pi = 3.14; // global variable, declaredoutside off all functions including main, but can be accessed by all functions

float circumference(float radius) {
  float circ;
  circ = 2*pi*radius;
  return circ;
  // return 2*3.14*radius;
}

float volume(float side) {
  return side*side*side;
}

float average(float num1, float num2, float num3) {
  return (num1+num2+num3)/3;
}

int mulTwoNums(int num1, int num2) {
  return num1*num2;
}

void multiplication(int num) {
  
  for(int i=1; i<=10; i++) {
    printf("%d x %d = %d\n", num, i, mulTwoNums(num, i));
  }
  
}

int main(void) {
  printf("circumference: %.2f\n", circumference(5.5));
  printf("volume: %.2f\n", volume(5.5));
  printf("average of 3 numbers: %.2f\n", average(5.6, 6, 3.4));
  multiplication(4); // give numbers 2 to 7

  ///////////////////////////////////////////////////////////////////
  // Sorting algorithms: Bubble Sort (achieved through assessment steps - do not implement again), Selection Sort, Quick Sort, Merge Sort
  // SELECTION SORT ALGORITHM
  int arr[] = {4,56,103,3,89,15,45,67};
  int size = sizeof(arr)/sizeof(arr[0]);
  int min_index;

  printf("\nUnsorted Array\n");
  for(int i=0; i<size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  for(int i=0; i<size-1; i++) {
    min_index = i;
    for(int j=i+1; j<size; j++) {
      if(arr[j] < arr[min_index]) {
        min_index=j; // set min_index to the index of the smallest element of the unsorted portion of the array
      }
    }
    if(min_index != i) { // if the number is not already sorted
      int temp = arr[i];
      arr[i] = arr[min_index];
      arr[min_index] = temp;
    } 

    printf("\nSelection Sort Array - Pass %d\n", i+1);
    for(int k=0; k<size; k++) {
      printf("%d ", arr[k]);
    }
    printf("\n");
  }

  printf("\nSorted Array\n");
  for(int i=0; i<size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");






  
  return 0;
}