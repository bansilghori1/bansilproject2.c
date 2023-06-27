/*Q.2 Write a Program to input electricity unit charges and calculate the total electricity bill
 according to the given*/


#include<stdio.h>
#include<conio.h>

void main (){

float bill,a,f;

printf("-------------------------------------\n");
printf("-----------ELECTRICITY BILL----------\n");
printf("-------------------------------------\n\n");

printf("-------------------------------------\n");
printf("       charges of per unit ");
printf("For the first 50 units Rs. 0.50/unit\nFor the next 100 units Rs. 0.75/unit\nFor the next 100 units Rs. 1.20/unit\n");
printf("For units above 250 Rs. 1.50/unit\n");
printf("-------------------------------------\n\n");

printf("*************************************\n");
printf("      Enter electricity units:  ");
scanf("%f",&bill);
printf("\n*************************************\n\n");



if(bill<=50){
             a= (bill*0.50);
             f=a +a*0.2 ;        
             printf("Electricity Bill = Rs.  %.1f",f);
             
            }else if(bill<=150){
                                a=(25 + (bill - 50)*0.75);
                                f=a +a*0.2;  
                                printf("Electricity Bill = Rs.  %0.1f",f);
            }else if(bill<=250){
                                a=(25 + 75 +(bill-150)*1.20);
                                f=a +a*0.2;
                                printf("Electricity bill = Rs.  %.1f",f);

            }else{
                  a=(25 + 75 + 120 + (bill - 250 )*1.50);
                  f=a +a*0.2;
                  printf("Electricity Bill = Rs.  %.1f",f);
            }


return 0;
getch();    
}

/*Input:
       Enter electricity units: 435
Output: 
       Electricity Bill = Rs. 597.0
*/

