#include<stdio.h>

void pali(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
pali(n);
return 0;
}
void pali(int n)
{  int temp=n;
    int rev = 0;
    while(n!=0)
    {   
         int rem = n%10;
        rev = rev*10+rem;
        n=n/10;
        }
    if(temp==rev)
        {
            printf("this number is palidrome number ");
        }

        else
        {
            printf("this number is not palidrome number ");
        }
    }