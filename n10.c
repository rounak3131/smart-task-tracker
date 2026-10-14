#include<stdio.h>

int count(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    printf("total element is %d",count(n));

    return 0;
}

int count(int n)
{
    if(n==0)
    {
        return;
    }

    return 1+count(n/10);
}