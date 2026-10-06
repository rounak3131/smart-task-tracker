#include<stdio.h>

int main()
{
    int a[]={10,20,30,40,50};
    int *p=a;
    int j;
    for(int j= 0; j<5; j++)
    {
        printf("%d\n",*p);
        p++;
    }

    return 0;
}