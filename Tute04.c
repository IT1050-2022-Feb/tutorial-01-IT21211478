/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int no1,int no2);//define functions
int maximum(int no1,int no2);
int multiply(int no1,int no2);

int main() {//main function
   int no1, no2;//define variables
   printf("Enter a value for no 1 : ");//display enter no
   scanf("%d", &no1);//read user's no
   printf("Enter a value for no 2 : ");//display enter no
   scanf("%d", &no2);//read user's no
   printf("%d ", minimum(no1, no2));//display minimum no
   printf("%d ", maximum(no1, no2));//display maximum no
   printf("%d ", multiply(no1, no2));//display multiply 
   return 0;
}//end of main function

int minimum(int no1,int no2){//define minimum no 
  int minimum;
  if(no1<no2){//condition
    minimum = no1;
  }
  else{//condition
    minimum = no2;
  }
  return minimum;//return to main fuction
}

int maximum(int no1,int no2){//define maximum no
  int maximum;
  if(no1>no2){//condition 
    maximum = no1;
  }
  else{//condion
    maximum = no2;
  }
  return maximum;//return to main fuction 
}

int multiply(int no1,int no2){//define multiply
  int multiply;
  multiply = no1 * no2;//calculation
  return multiply;//return to main fuction
}
