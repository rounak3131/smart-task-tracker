#include<stdio.h>

int main()
{
  int n;
  int pos;
  int arr[100];

  printf("enter the array size : ");
  scanf("%d",&n);

  printf("enter the array elements : ");
  for(int i = 0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("enter the position : ");
  scanf("%d",&pos);

  for(int i = pos-1; i<n-1; i++)
  {
    arr[i]=arr[i+1];
  }
  n--;

  printf("array after deleteting any position\n");
  for(int i = 0; i<n; i++)
  {
    printf("%d\t",arr[i]);
  }

  return 0;
}