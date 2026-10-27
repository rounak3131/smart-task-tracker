#include<stdio.h>

int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    
    int rem;
    int rev = 0;
    int temp;

    temp = num;

    while(num>0)
    {
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
    }
    if(temp == rev)
    {
        printf("this is palidrome number %d",num);

    }

    else

    printf("this is not a palidrome number %d",num);

    return 0;

}