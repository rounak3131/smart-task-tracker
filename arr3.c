
#include<stdio.h>

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("0\n");
    printf("1\n");


    for(int i = 2; i<n; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
          printf("%d\n",fib[i]);
    }

    return 0;
    
}