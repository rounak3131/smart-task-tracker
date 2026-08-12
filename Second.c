#include<stdio.h>

int main()
{
    int days;

    printf("enter the days (1-7) : ");
    scanf("%d",&days);

    switch(days){

        case 1 : printf("monday\n");
                 break;
        case 2 : printf("tuesday\n");
                 break;
        case 3 : printf("wednesday\n");
                 break;
        case 4 : printf("thursaday\n");
                 break;
        case 5 : printf("friday\n");
                 break;
        case 6 : printf("saturday\n");
                 break;
        case 7 : printf("sunday\n");
                 break;
                 
         default : printf("enter a valid day btw (1-7)");

    }

    return 0;
}


