#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr =(int*)calloc(5,sizeof(int));

    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;

    ptr = realloc(ptr,7);

    ptr[0]=0;
    ptr[1]=2;
    ptr[2]=4;
    ptr[3]=6;
    ptr[4]=8;
    ptr[5]=10;
    ptr[6]=12;

    for(int i = 0; i<7; i++)
    {
printf("%d\n",ptr[i]);
    }

    return 0;
    

}