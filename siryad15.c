#include<stdio.h>

int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d",&n);

    int arr[n];
    printf("enter the array elements : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("======even numbers=====\n");
    for(int i = 0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\t",arr[i]);
        }
    }

     printf("\n======odd numbers=====\n");
    for(int i = 0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d\t",arr[i]);
        }
    }

    return 0;
}

   
    
