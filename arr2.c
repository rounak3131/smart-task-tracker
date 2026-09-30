#include<stdio.h>
 
int reverseval(int arr[],int n);  
void printval(int arr[],int n);

int main(){
  int arr[]={2,4,5,6,4,7};

  reverseval(arr,6);
  printval(arr,6);

  return 0;
}

 void printval(int arr[],int n)
{
  for(int i = 0; i<n; i++)
  {
    printf("%d\t",arr[i]);

  }
}
int reverseval(int arr[],int n)
{
    for(int i = 0; i<n/2; i++)
    {
        int first = arr[i];
        int second = arr[n-i-1];

        arr[i]=second;
        arr[n-i-1]=first;

    }
}