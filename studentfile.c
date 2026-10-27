#include<stdio.h>

int main()
{
    char name[100];
    int age;
    float cgpa;
    FILE *fptr;
    fptr = fopen("student.txt","w");

    printf("enter the name :");
    scanf("%[^\n]s",name);

    printf("enter the age : ");
    scanf("%d",&age);

    printf("enter the cgpa : ");
    scanf("%f",&cgpa);

    fprintf(fptr,"student name = %s\n",name);
    fprintf(fptr,"student age = %d\n",age);
    fprintf(fptr,"student cgpa = %f\n",cgpa);

    fclose(fptr);

    return 0;



}