#include<stdio.h>

int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d",&n);

    int arr[100];
    printf("enter the array elements : ");
    for(int i = 0; i<n; i++)
    {
    scanf("%d",&arr[i]);
    }
    int pos;
    printf("enter the position where you wants to add new value : ");
    scanf("%d",&pos);

    int value;
    printf("enter the number : ");
    scanf("%d",&value);

    arr[pos-1]=value;

    for(int i = 0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
    
}