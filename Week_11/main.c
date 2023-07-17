#include <stdio.h>
#include <math.h>

// Function that calculates the square of a number
float square(float num) {
  float sq = num*num;
  return sq;
  // OR return num*num;
}

// Function that calculates the cube of a number
float cube(float num) {
  return num*num*num;
}

// Function calculates the maximum between 2 numbers
float max(float num1, float num2) {
  if(num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}

// Function calculates the minimum between 2 numbers
float min(float num1, float num2) {
  if(num1 < num2) {
    return num1;
  } else {
    return num2;
  }
}

// Function that checks if a number is prime or not
int isPrime(int num) {

  for(int i=2; i<=num/2; i++) {
    if(num%i==0) {
      return 0;
    }
  }
  return 1;
}

// Function that searches for the largest element within an array
int findMax(int nums[], int size) {
  int max = nums[0];
  // int size = sizeof(nums)/sizeof(nums[0]);
  // printf("max=%d size=%d\n", max, size);
  int i=1;

  while(i<size) {
    if(nums[i]>max) {
      max = nums[i];
    }
    i++;
  }
  
  return max;  
}

// Function that calculates circumference of a circle
float circum(float radius) {
  // M_PI comes from the math library, and it is a constant used for pi.
  return 2*M_PI*radius;
}

// Function that calculates average between 3 numbers
float average(float num1, float num2, float num3) {
  return (num1 + num2 + num3)/3;
}

// Function that prints multiplication table (no return)
void mult_table(int num) {
  // code
  // no return statement
}


int main(void) {
  float num=5.5;
  float sq, cb;
  float num1=4.5, num2=4.5;
  int pr=9;
  int nums[] = {3,4,9,7,8};
  
  sq = square(num);
  cb = cube(num);
  
  printf("Square of %.2f is: %.2f\n",num,sq);
  printf("Cube of %.2f is: %.2f\n",num,cb);
  printf("Maximum between %.2f and %.2f is: %.2f\n", num1, num2, max(num1,num2));
  printf("Minimum between %.2f and %.2f is: %.2f\n", num1, num2, min(num1,num2));

  if(isPrime(pr)==1) {
    printf("%d is prime.\n", pr);
  } else {
    printf("%d is not prime.\n", pr);
  }

  int size = sizeof(nums)/sizeof(nums[0]);
  printf("Maximum of the nums array is: %d\n", findMax(nums,size));

  float radius = 6.7;
  printf("Circumference of a circle with %.2f radius is %.10f\n", radius, circum(radius));

  float num3=9.0;
  printf("Average of %.2f, %.2f and %.2f is %.2f\n", num1, num2, num3, average(num1, num2, num3));

  return 0;
}