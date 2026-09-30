#include<stdio.h>
#include<string.h>

int checkvowels(char str[]);

int main()
{
   char str[100];
   fgets(str,100,stdin);
   printf("vowels is = %d",checkvowels(str));

   return 0;

}
int checkvowels(char str[])
{
    int count = 0;
   for(int i = 0; str[i]!='\0'; i++)
   {
      if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u')
      {
         count++;
      }

   }

   return count;

}