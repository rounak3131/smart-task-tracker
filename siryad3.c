#include<stdio.h>

int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d",&n);
    int sum = 0;

    int arr[n];
    printf("enter the elements : ");
    
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<n; i++)
    {
        sum = sum+arr[i];
    }

    printf("sum of array is : %d",sum);
}