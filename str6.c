#include<stdio.h>

int main()
{
    int i;
    int n;
    int sum = 0;
    int original;
    int lastdigit;
    int fact;

    printf("enter the number : ");
    scanf("%d",&n);
original = n;
    while(n>0)
    {
        lastdigit = n%10;
        fact = 1;
        for(int i = 1; i<=lastdigit; i++)
        {
           fact = fact*i;
         }
        sum = sum+fact;
        n=n/10;
    }
if(sum == original)
    {
        printf("this is a strong number : %d",original);
    }
    else
    {
        printf("this is not a strong number : %d",original);
    }

    return 0;
}
