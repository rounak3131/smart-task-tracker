#include<stdio.h>
#include<string.h>

void salting(char pass[]);

int main()
{
    char pass[200];
    fgets(pass,200,stdin);

salting(pass);

return 0;
}
void salting(char pass[])
 {

    char newpass[200];
    char str = "2332";
    strcpy(newpass,pass);
    strcat(newpass,str);
     puts(newpass);


}