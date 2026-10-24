#include<stdio.h>

int sumofdigit(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    printf("sum of digit %d",sumofdigit(n));

    return 0;

}
int sumofdigit(int n)
{
    if(n==0)
    {
        return 0;
    }

    return (n%10)+sumofdigit(n/10);
}