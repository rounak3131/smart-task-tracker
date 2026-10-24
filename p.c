#include<stdio.h>

int reverse(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    reverse(n);
    return 0;
}
int reverse(int n)
{
    if(n==0)
    {
        return;
    }

     int b = n%10;
    printf("%d",b);
    
    return reverse(n/10);

}

