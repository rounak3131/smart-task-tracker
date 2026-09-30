
#include<stdio.h>

float sum(float n,float m);

int main()
{
    float n;
    float m;
    printf("enter the number n ");
    scanf("%f",&n);
    printf("enter the number m ");
    scanf("%f",&m);

    printf("sum is  = %f",sum(n,m));

    return 0;

}
float sum(float n,float m)
{
    
   return n+m;

}