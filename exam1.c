#include<stdio.h>
#include<string.h>

void swap(int *a,int *b);

int main()
{
   int a;
   int b;

   printf("enter the value of a : ");
   scanf("%d",&a);

   printf("enter the value of b : ");
   scanf("%d",&b);

   swap(&a,&b);

   printf("before swapping a and b value is = %d %d\n",a,b);



}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

    printf("after swap a and b value is = %d %d ",*x,*y);

}