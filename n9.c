#include<stdio.h>

void printnumber(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    printf("number between 1 to %d : ",n);
    

    printnumber(n);
    printf("\n");
    return 0;

}
void printnumber(int n)
{
    if(n==0)
    {
        return;
    }
    printnumber(n-1);
    printf("%d",n);

}