/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {//start program

  int n, counter = 1, sum = 0;//define variables

  printf("enter number as n : ");//display enter no for n
  scanf("%d",&n);//read user's input

  while(counter <= n){//condition
    sum = sum + counter;//calculation
    counter = counter + 1;//continue
  }
  printf("sum is %d",sum);//display calculation
  
  return 0;
}//end of the program

