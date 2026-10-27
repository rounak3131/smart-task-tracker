#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("sum.txt","w");

    int a;
    int b;

    printf("enter the number : ");
    scanf("%d",&a);

    printf("enter the number b : ");
    scanf("%d",&b);

    fprintf(fptr,"%d",a);
    fprintf(fptr,"%d",b);

    fclose(fptr);

    fptr = fopen("sum.txt","w");

    fprintf(fptr,"%d",a+b);

    fclose(fptr);

    return 0;


}