#include<stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    printf("sum is %d",sum(n));

    return 0;


}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n+sum(n-1);
}