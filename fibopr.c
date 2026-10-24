#include<stdio.h>

int main()
{

int n;
int rev = 0; 
int rem;

printf("enter the number : ");
scanf("%d",&n);

while(n!=0)
{


rem = n%10;
rev = rev*10+rem;
n=n/10;
}
printf("reverse : %d",rev);

return 0;

}
