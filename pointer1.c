#include<Stdio.h>


int main()
{
    int num1;
    int num2;
    int sum = 0;

    int *ptr1=&num1;
    int *ptr2=&num2;


  printf("enter the number 1 : ");
  scanf("%d",&num1);

  printf("enter the number 2 : ");
  scanf("%d",&num2);

  sum=(*ptr1)+(*ptr2);

  printf("the sum is = %d",sum);

  return 0;


  

}