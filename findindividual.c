#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    int temp;
    int targetdigit;
    int count = 0;
    int digit;

    printf("enter the number : ");
    scanf("%d",&num);

    printf("enter the number to check : ");
    scanf("%d",&targetdigit);

    temp = abs(num);

    if(temp==0 && targetdigit==0)
    {
        count = 1;
        
    }

    else
    {
        while(temp>0)
        {
            digit = temp%10;

            if(digit==targetdigit)
            {
                count++;
            }

            temp = temp/10;
        }
    }
    printf("the number occurs %d times ",count);

    return 0;

}