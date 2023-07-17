#include <stdio.h>

extern int sort(void) {
  int arr[] = {32, 16, 83, 30, 77, 8, 85, 1};
  int size = 8; // int size = sizeof(arr) / sizeof(arr[0]);
  int i, temp;

  // PRINTING LOOP
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // SORTING ALGORITHM (BUBBLE SORT)
  // Other sorting algorithms Selection Sort, and Quicksort
  // We iterate up until size-1 because when we are at the last index of the
  // array and trying to print the adjacent/next index, it will a random value.
  for (i = 0; i < size - 1; i++) {
    // printf("%d   %d\n", arr[i], arr[i+1]);
    for (int j = 0; j < size - 1 - i; j++) {

      if (arr[j] > arr[j + 1]) { // for descending order change to '<'
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    /*
    printf("Iteration %d: ", i);
    // PRINTING LOOP
    for(int k=0; k<size; k++) {
      printf("%d ", arr[k]);
    }
    printf("\n");
    */
  }

  // PRINTING LOOP
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}