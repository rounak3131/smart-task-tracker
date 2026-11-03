#include<stdio.h>

int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int count = 0;
    for(int i= 0; i<n; i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }

    printf("total negative number in this array : %d",count);

    return 0;
}