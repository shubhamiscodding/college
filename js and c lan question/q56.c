// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
  char* str="MI";
  int total=0;
  for(int i=0;i<strlen(str);i++){
      int value=0;
      int privalue=value;
      switch(str[i]){
          case 'I':value=1;break;
          case 'V':value=5;break;
          case 'X':value=10;break;
          case 'L':value=50;break;
          case 'C':value=100;break;
          case 'D':value=500;break;
          case 'M':value=1000;break;
      }
      if(privalue>value){
          total=total-value;
      }
      else{
          total=total+value;
      }
  }
  printf("%d",total);
    return 0;
}

// or
#include <stdio.h>
#include <string.h>

int con(const char *str, int index) {
    // Base case: If we reach the end of the string
    if (index >= strlen(str)) {
        return 0;
    }

    int value = 0;

    // Determine the value of the current Roman numeral
    switch (str[index]) {
        case 'I': value = 1; break;
        case 'V': value = 5; break;
        case 'X': value = 10; break;
        case 'L': value = 50; break;
        case 'C': value = 100; break;
        case 'D': value = 500; break;
        case 'M': value = 1000; break;
        default: return 0; // Invalid character
    }

    // Check the next character (if exists)
    int nextValue = con(str, index + 1); // Get the value of the next numeral

    // If the current value is less than the next, we subtract it
    if (nextValue > value) {
        return nextValue - value; // Subtract current value
    } else {
        return value + nextValue; // Add current value
    }
}

int main() {
    const char *str = "MCMXCIV"; // Example Roman numeral
    int result = con(str, 0); // Start from index 0
    printf("The integer value of %s is %d\n", str, result);
    return 0;
}
