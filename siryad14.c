#include<stdio.h>

int main()
{
    int n;
    printf("enter the 1 array size : ");
    scanf("%d",&n);

    int arr1[n];
    printf("enter the array elements : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    int size;
    printf("enter the 2 array size : ");
    scanf("%d",&size);

    int arr2[size];
    printf("enter the array elements : ");
    for(int j = 0; j<size; j++)
    {
        scanf("%d",&arr2[j]);
    }

    int arr3[n+size];
    for(int i  = 0; i<n; i++)
    {
        arr3[i]=arr1[i];
    }

    for(int i = 0; i<size; i++)
    {
        arr3[n+i]=arr2[i];
    }

    for(int i = 0; i<n+size; i++)
    {
        printf("%d\t",arr3[i]);
    }

    return 0;
}