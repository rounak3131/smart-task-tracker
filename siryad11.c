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

    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("dublicate value is %d at %d position\n",arr[j],j);
                count++;
                break;
            }
        }
    }
    printf("total number of dublicate in this array %d",count);
    return 0;

    
}