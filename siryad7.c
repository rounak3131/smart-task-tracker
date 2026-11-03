#include<stdio.h>

int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements : ");
    for(int i= 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int arr2[n];

    for(int i = 0; i<n; i++)
    {
        arr2[i]=arr[i];
    }

    for(int i =0; i<n; i++)
    {
        printf("%d",arr2[i]);
    }

    return 0;
    
}