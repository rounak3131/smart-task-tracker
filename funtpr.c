#include<stdio.h>

int factorial(int t){
    int f = 1;
    while(t>1)
    {
        f = f*t;
        t=t-1;
    }
    return f;

}
void main()
{
    int n,f;
    printf("enter the number n : ");
    scanf("%d",&n);
    
    f=factorial(n);
    printf("factorial is  : %d\n",f);

    
}


