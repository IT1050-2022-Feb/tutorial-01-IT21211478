/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {//start program
  int marks1,marks2,total=0;//define variables
  float avg;

  printf("enter marks 1 : ");//display enter marks 1
  scanf("%d",&marks1);//read user's input
  printf("enter marks 2 : ");//display enter mark 2
  scanf("%d",&marks2);//read user's input

  total = marks1 + marks2 ;//calculate total
  avg = total/2;//calculate average

  printf("Total is %d \n",total);//display total
  printf("Average is %.2f ",avg);//display average
  
  return 0;//start program
}

