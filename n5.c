#include<stdio.h>

int main()
{
    int n;
    int m;

    printf("enter the number of n : ");
    scanf("%d",&n);

    printf("enter the number of m : ");
    scanf("%d",&m);

    int *ptr=&n;
    int *ptr2=&m;

    if(*ptr>*ptr2)
    {
        printf("n is maximum value : ");

    }

    else
    {
        printf("m is maximum value : ");
    }

    return 0;
}