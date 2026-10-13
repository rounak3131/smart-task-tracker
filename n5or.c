#include<stdio.h>

void minmax(int *n,int *m);

int main()
{
    int n;
    int m;
    
printf("enter the value of n : ");
scanf("%d",&n);

printf("enter the value of m : ");
scanf("%d",&m);

minmax(&n,&m);

return 0;


}
void minmax(int *n,int*m )
{
    if((*n)>(*m))
    {
        printf(" n is maximum number %d",*n);
    }

    else
    {
        printf("m is maximum number %d",*m);

    }
}