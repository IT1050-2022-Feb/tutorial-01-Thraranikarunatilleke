/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int subject1, subject2 ;
   int avarage;
   
   subject1 = 80;
   subject2 = 68;
    
   avarage = (subject1 + subject2) / 2;
   
   printf("avarage is %d\n", avarage);
   
  
  return 0;
}

