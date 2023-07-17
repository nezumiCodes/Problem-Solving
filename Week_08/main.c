#include <stdio.h>
#include <math.h>

int main(void) {
  // size of the nums array is 10
  int nums[] = {19, 27, 66, 63, 37, 25, 57, 40, 11, 16};
  int i, size = 10; // size of array

  // A - Display numbers
  printf("{");
  for(i=0; i<size; i++) {
    if(i==size-1) {
      printf("%d",nums[i]);
    } else {
      printf("%d, ",nums[i]);
    }
  }
  printf("}\n");

  // B - Calculate range and standard deviation
  // range = max - min
  // we set max as a very small number (because we know that any number in the array will be larger than it, and thus we can compare the rest of the values in the array), we set min as a very large number for the same reasoning.

  
  
  int max=-10000, min=10000, sum=0;
  for(i=0; i<size; i++) {
    if(nums[i]>max) { // if 19>-10000 then max=19 | if 27>19 then max=27
      max = nums[i];
    } 
    if(nums[i]<min) { // if 19<10000 then min=19 | if 27<19 ==> no so min=19 still
      min = nums[i];
    }
    sum = sum + nums[i]; // same as sum += nums[i]
  }
  printf("max = %d, min = %d, range = %d, avg = %.2f\n", max, min, max-min, (float)sum/size);

  // std = sqrt( sum( nums[i] - avg )^2 / n ), where n is size of array
  int sum2=0;
  for(i=0; i<size; i++) {
    // pow(x,y) ==> x^y 
    sum2 = sum2 + pow(nums[i] - ((float)sum/size), 2);
  }
  printf("std = %.2f\n", sqrt(sum2/size));
/*
  // calculate power without the pow() function
  int j, power=3, num=5, res=1;
  for(j=1; j<=power; j++) {
    res = num*res;
  }
  printf("res = %d\n", res);

  // calculate sqrt without the sqrt() function
  float x = 25;
  float y = x;
  float z = (y + (x/y))/2; // (25 + (1))/2 = 13;

  // while the difference between y and z is larger than 5 decimal points
  // continue iterating
  while((y-z) >= 0.00001) {
    y=z;
    z = (y + (x/y))/2;
  }
  printf("Sqrt of %.5f is %.5f", x, z);
*/
/*
  // C - Replace a single number
  int pos, val;
  printf("Select position (1-10) to be replaced: ");
  scanf("%d", &pos);
  printf("Select value: ");
  scanf("%d", &val);
  //Because indexing starts from 0, index = pos-1
  nums[pos-1] = val;
  
  printf("{");
  for(i=0; i<size; i++) {
    if(i==size-1) {
      printf("%d",nums[i]);
    } else {
      printf("%d, ",nums[i]);
    }
  }
  printf("}\n");
*/
  // D - Swap two numbers
  int pos1, pos2, temp;
  printf("Select first position (1-10) to be replaced: ");
  scanf("%d", &pos1);
  printf("Select second position (1-10) to be replaced: ");
  scanf("%d", &pos2);

  temp = nums[pos1-1];
  nums[pos1-1] = nums[pos2-1];
  nums[pos2-1] = temp;

  printf("{");
  for(i=0; i<size; i++) {
    if(i==size-1) {
      printf("%d",nums[i]);
    } else {
      printf("%d, ",nums[i]);
    }
  }
  printf("}\n");

  // E - Repopulate the entire array
  // Write a for loop with a scanf for each index (scanning for the new value)

  // F - Sum of odd numbers
  int sumOdd = 0;

  for(i=0; i<size; i++) {
    if(nums[i]%2 != 0) {
      sumOdd += nums[i];
    }
  }
  printf("Sum of odd numbers = %d\n", sumOdd);


  //================================================================//
  //Grade B
  int newNums[30];
  int value, sz=0;

  for(i=0; i<30; i++) {
    printf("Select value to place in position %d or write -1 to terminate: ", i+1);
    scanf("%d", &value);
    newNums[i]=value;
    sz++; //sz +=1, sz = sz + 1
    if(value == -1) {
      break;
    }
  }

  printf("{");
  for(i=0; i<sz; i++) {
    if(i==sz-2) {
      printf("%d", newNums[i]);
    } else if(newNums[i] != -1) {
      printf("%d, ", newNums[i]);
    } 
  }
  printf("}\n");
  
  return 0;
}