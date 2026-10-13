#include<stdio.h>

void sum(int *n,int *m);

int main()
{
  int n;
  int m;

  printf("enter the number n : ");
  scanf("%d",&n);

  printf("enter the number m : ");
  scanf("%d",&m);

  sum(&n,&m);

  return 0;
}
void sum(int *n,int *m)
{
      printf("sum is %d",*n+*m);
}