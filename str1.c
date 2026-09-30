#include<stdio.h>
#include<string.h>
int checkChar(char str[],char ch[]);

int main(){
    char str[100];
    fgets(str,100,stdin);
    char ch[20];
    printf("enter the character you want to check present or not : ");
    scanf("%c",&ch);
    checkchar(str,ch);
   return 0;
}
int checkChar(char str[],char ch[]){
    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i] == ch)
        { printf("character is present ");
            return ;
        }
    }
    printf("character is not present");
}