#include<stdio.h>

int main()
{
    int num1,num2;
    int *ptr1=&num1;
    int *ptr2=&num2;
    int temp;


    printf("enter the number 1 : ");
    scanf("%d",&num1);

    printf("enter the number 2: ");
    scanf("%d",&num2);

    temp= *ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("swap nummber is %d %d",num1,num2);

    return 0;


    
}