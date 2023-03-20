/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() {
  int mark1,mark2;
  printf("Enter mark 1 and 2 : ");
  scanf("%d %d",&mark1,&mark2);
  printf("Average of two marks : %.1f",(mark1+mark2)/2.0);
return 0;
}
 