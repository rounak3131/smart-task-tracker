#include<Stdio.h>

struct marks{
 char name[50];
int rollno;
 int marks;
};

int main()
{
    struct marks m[5];
    for(int i = 0; i<5; i++)
    {
        printf("enter the details %d\n",i+1);
        printf("enter roll no : ");
        scanf("%d",&m[i].rollno);

        printf("enter the name of student : ");
        scanf("%s",&m[i].name);

        printf("enter the marks of student : ");
        scanf("%d",&m[i].marks);
    }

        for(int i = 0; i<5; i++)
        {
            printf("========= here are the information of all student ===========\n");
            printf("name of student = %s \n roll number = %d \n total obtained marks = %d\n ",m[i].name,m[i].rollno,m[i].marks);
        }
    

    return 0;
}
