#include<stdio.h>
#include<string.h>

void checkchar(char str[],char ch);
int main()
{

}
void checkchar(char str[],char ch)
{
  for(int i = 0; str[i]!='\0'; i++)
  {
    if(str[i]==ch)
    {
      printf("character is present");
      
    }
  }
}