#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main()
{
    char password[100];
    scanf("%s",password);
    salting(password);
}

void salting(char password[])
{
char newpass[200];
char str[]="851";
strcpy(newpass,password);
strcat(newpass,str);
puts(newpass);
}