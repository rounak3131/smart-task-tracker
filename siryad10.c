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

    int target;
    printf("enter the target : ");
    scanf("%d",&target);
    int found = 0;

    for(int i = 0; i<n; i++)
    {
        for(int j = i; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("target is %d formed by %d , %d \n",target,arr[i],arr[j]);
                found = 1;
            }
        }
    }
if(found==0)
{
    printf("target isn't present in this array");
}
    
    return 0;
}
