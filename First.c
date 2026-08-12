#include<stdio.h>

int main()

{
   int units,bills = 0,total_bills;

   printf("units : ");
   scanf("%d",&units);

   if(units<=50){
    
   bills = units*0.50;
   }
   else if ( units<=150){

   bills = (50*0.5)+((units-50) *0.75);
   }
   else if (units<=250){
    
   bills = (50*0.50)+(100*0.75)+((units-150)*1.20);
   }
   else if(units>=251){

   bills = (50*0.50)+(100*0.75)+(100*1.20)+((units-250)*1.50);
   }
   else{

   printf("enter a valid units");
   }

   total_bills = bills + (bills*0.20);
   printf("total bill : %d\n",total_bills);
   printf(" total units used by consumer %d\n",units);


   return 0;
    
   
   

}