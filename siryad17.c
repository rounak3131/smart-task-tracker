#include<stdio.h>

void reverse(int arr[],int n);
void printarr(int arr[],int n);

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

        reverse(arr,n);
        printarr(arr,n);

        return 0;
        } 
    
 void reverse(int arr[],int n)
    {
        for(int i = 0; i<n/2; i++)
        {
        int firstval =arr[i];
        int secondval = arr[n-i-1];

        arr[i]=secondval;
        arr[n-i-1]=firstval;
        }
}

void printarr(int arr[],int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}