#include<stdio.h>
#include<string.h>

struct address{
int houseno;
char block[10];
char city[100];
char state[100];

};

void print(struct address add);

int main()
{
    int n;
    printf("enter the number you want to store the data : ");
    scanf("%d",&n);
struct address adds[3];
for(int i= 0; i<n; i++)
{
    printf("enter the details of person %d\n",i+1);
    printf("house no :\n ");
    scanf("%d",&adds[i].houseno);
    printf("enter block : \n ");
    scanf("%s",&adds[i].block);
    printf("enter city : \n");
    scanf("%s",&adds[i].city);
    printf("enter state : \n");
    scanf("%s",&adds[i].state);
}

for(int i=0; i<n; i++)
{
    printf("person %d\n address %s\t %s\t %s\t %s\t",i+1,adds[i].houseno,adds[i].block,adds[i].city,adds[i].state);

}

return 0;

}