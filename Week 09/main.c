#include <stdio.h>

int main(void) {
  // A string is essentially an array of characters
  // So we define char for the data type
  // We give a name to variable (string) and [] (because this is an array)
  // The content of the variable is defined by "" (double quotations)
  char str[] = "abcd";
  // We can also define a string as an array of initial values (same as we did with numbers). When we define single characters we need to use '' (single quotations).
  // For string/char arrays we need to use the terminator '\0'
  char str2[] = {'a', 'b', 'c', 'd', '\0'};

  int i=0;
  while(str[i] != '\0') {
    printf("%c", str[i]);
    i++; // same as i=i+1 OR i+=1
  }

  char str3[] = "efgh";
  char temp;
  i=0;
  // We want to swap the values of str and str3
  // You can use either str or str3 for the while() condition, since they have the same length and they terminate together
  while(str[i] != '\0') {
    temp = str[i];
    str[i] = str3[i];
    str3[i] = temp;
    i++;
  }
  
  // Printing loop for str
  i=0;
  printf("\nstr is: ");
  while(str[i] != '\0') {
    printf("%c", str[i]);
    i++; // same as i=i+1 OR i+=1
  }
  
  // Printing loop for str3
  i=0;
  printf("\nstr3 is: ");
  while(str3[i] != '\0') {
    printf("%c", str3[i]);
    i++; // same as i=i+1 OR i+=1
  }
  
  //========================================================================//
  // Reverse string
  char str4[] = "Hello World!";
  i=0;
  int count = 0; // count of chars in a string
  // The following loops counts how many characters a char array (string) has
  // function for string length: strlen()
  while(str4[i] != '\0') {
    count++;
    i++;
  }
  printf("\nReversed str: ");
  // Reversing loop
  for(i=count; i>=0; i--) {
    printf("%c", str4[i]);
  }

  //========================================================================//
  // Comparing strings for equality
  char var1[] = "Hello World!";
  // Change var2 to experiment for different outputs
  char var2[] = "Hello W0rld!";
  int flag=0; // 0 if characters are the same, 1 if they are different
  
  i=0;
  while(var1[i] != '\0') {
    if(var1[i] != var2[i]) {
      flag = 1;
      break;
    }
    i++;
  }

  if(flag == 0 ) {
    printf("\nSAME STRINGS");
  } else {
    printf("\nDIFFERENT STRINGS");
  }
  
  return 0;
}