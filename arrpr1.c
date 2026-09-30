#include<stdio.h>

int main()
{
    int size;

    printf("enter the number : ");
    scanf("%d",size);

    int arr[size];

    int largest = arr[0];
    for(int i = 0; i<size; i++)
    {
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    printf("this is largest no. in array : %d",largest);

    return 0;
}