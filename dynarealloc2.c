#include<stdio.h>
#include<Stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));

    for(int i = 0; i<5; i++)
    {
        printf("'enter the number %d : ",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i = 0; i<5; i++)
    {
        printf("%d",ptr[i]);
    }

    return 0;
}