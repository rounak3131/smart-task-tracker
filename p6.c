#include<stdio.h>

int main()
{
    int n;
    int digit = 0;
    printf("enter the number : ");
    scanf("%d",&n);

    if(n==0)
    {
        digit = 0;
    }

    while(n>0)
    {
        digit++;
        n = n/10;
    }

    printf(" the total number of digit is %d ",digit);

    return 0;
}