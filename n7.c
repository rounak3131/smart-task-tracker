#include<Stdio.h>

 int fact(int num);
 
int main()
{
int num;
printf("enter the number : ");
scanf("%d",&num);

printf("factorial is %d",fact(num));

return 0;

}

int fact(int num)
{
    if(num<=1)
    {
    return 1;
    }

    return num*fact(num-1);
}