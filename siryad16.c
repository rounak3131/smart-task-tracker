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
    printf("enter the number : ");
    scanf("%d",&target);
    int found = 0;

    for(int i = 0; i<n; i++)
    {
        if(arr[i]==target)
        {
            printf("yes target %d is present  ",target);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("target isn't present in this array : ");
    }
    return 0;
}