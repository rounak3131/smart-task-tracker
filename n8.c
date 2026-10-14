#include<stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int cal= sum(n);

    printf("the sum is %d",cal);
    return 0;
}
int sum(int n){
   
   if(n == 0)
   {
    return 0;
   }
   else 
   {
   return n + sum(n-1);
   }
}