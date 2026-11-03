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
   for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("dublicate value %d at %d position is deleteting....\n",arr[j],j);

                for(int k = j; k<n-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("===== Array after deleteting dublicate =====\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}