#include<stdio.h>

int main()

{
    int i =1;
    int n;
    int fact = 1; 

    printf("enter the value of n  : " );
    scanf("%d",&n);

    do
    {
        fact = fact*i;
        i++;

    } while(i<=n);

    printf("factorial = %d", fact );
    
    return 0;

}