#include<stdio.h>

int main()
{
  int a; int b;
  printf("enter the number a : ");
  scanf("%d",&a);

  printf("enter the number b : ");
  scanf("%d",&b);

  printf("A and B before swapping %d : %d\n ",a,b);

  a = a+b;
  b=a-b;
  a = a-b;

  printf("A and B after swapping %d : %d\n ",a,b);

  return 0;



}