#include<stdio.h>

void swap(int *n,int *m);

int main()
{
int n;
int m;
printf("enter the number n : ");
scanf("%d",&n);

printf("enter the number m : ");
scanf("%d",&m);

swap(&n,&m);

printf("\nthe value of n and m %d %d",n,m);

}
void swap(int *x,int *y)
{
 int temp;
temp = *x;
*x=*y;
*y=temp;

printf("the value of x and y %d %d",*x,*y);
}