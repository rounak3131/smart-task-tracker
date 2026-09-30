#include<stdio.h>

int factorial(int t);
int factorial(int t)
{
    int fact = 1;
    for(int i = 1; i<=t; i++)
    {
       fact = fact*i;

    }
    return fact;

}

void main()
{
  int t;
  printf("enter the number : ");
  scanf("%d",&t);
  factorial(t);
  printf("factorial is  = %d",factorial(t));
  
}
