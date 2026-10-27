#include<Stdio.h>

int main()
{
  FILE *fptr;
  fptr = fopen("odd.txt","w");

  int n;
  printf("enter the number : ");
  scanf("%d",&n);

  for(int i = 1; i<=n; i++)
  {
    if(i%2==1)
    {
        fprintf(fptr,"%d\n",i);
    }
  }

  fclose(fptr);
  return 0;
}