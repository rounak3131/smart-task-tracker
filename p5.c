#include<stdio.h>

int main()
{   int i = 1;
    int n;
    int rem;
    int rev = 0 ;
    printf("enter the number : ");
    scanf("%d",&n);
    int temp = n;

    while(n>0)
    {
     rem = n%10;
     rev = rev*10+rem;
     n=n/10;

    }
    

    if(temp==rev)
    {
        printf("this number is palidrome number %d ",rev);
    }

    else
    {
        printf("this number is not palidrome number %d ",rev);
    }

    return 0;


}