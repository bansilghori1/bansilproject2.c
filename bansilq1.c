/*Q.1 Write a Program to check whether a number is even or odd using the ternary operator.*/


#include<stdio.h>
#include<conio.h>

int main (){
int a;
printf("*************************************\n");
printf(" know a number is either even or odd\n");
printf("*************************************\n\n");

printf("******************************************************************\n");
printf(" Enter any number(except zero because 0 is not even or odd number):  ");
scanf("%d",&a);
printf("******************************************************************\n\n");

printf("*********************\n");
(a/2) ? printf(" This number is Even")
      : printf(" This number is odd") ;
printf("\n*********************\n");

return 0;
getch();    
}

/*Input:
         Enter any number: 12
Output: 
         This number is Even.
*/

