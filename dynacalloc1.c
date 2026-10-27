#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    
    ptr = (int*)calloc(5,sizeof(int));

    for(int i = 0; i<3; i++)
    {
        printf("Enter the number %d : ",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i = 0; i<3; i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0;
}