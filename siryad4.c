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

    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

        else if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    printf("the maximum value is %d\n",max);
    printf("the minimum value is %d",min);

    return 0;
}