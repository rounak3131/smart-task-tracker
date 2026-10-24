#include<stdio.h>

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("this number is even %d",n);

    }

    else if(n%2==1)
    {
        printf("this number is odd %d",n);

    }

    else if(n<=0)

    {
        printf("enter valid number ");
    }

    return 0;
}