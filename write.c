#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt","w");

    fprintf(fptr,"%c",'r');
    fprintf(fptr,"%c",'o');
    fprintf(fptr,"%c",'u');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'k');

    fclose(fptr);

    return 0;
}