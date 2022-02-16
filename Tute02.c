/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {//start program

  int distance , remainingDistance;//define variables
  float firstAmount = 0 , secondAmount = 0 , totalAmount = 0;

  printf("enter your distance : ");//display user to enter distance
  scanf("%d",&distance);//read user's input

  if(distance >= 30){//condition
    firstAmount = distance * 50;//calculation Amount
    secondAmount = 0;
  }
  else{//condition
    remainingDistance = distance - 30;//calculation remainingDistance
    firstAmount = 30*50;//calculation Amount
    secondAmount = remainingDistance * 40;//calculation Amount
  }

  totalAmount = totalAmount + firstAmount + secondAmount;//calculation total Amount
  printf("your total amount is %.2f",totalAmount);//display total amount
  
  return 0;
}//end of the program
