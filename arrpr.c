#include<stdio.h>
int printTable(int arr[][10],int n,int m,int number);

int main()
{
    int table[2][10];

    printTable(table,0,10,20);
    printTable(table,1,10,35);

    for(int i = 0; i<10; i++){

        printf("%d\t",table[0][i]);
    }
    printf("\n");

    for(int i = 0; i<10; i++)
    {
        printf("%d\t",table[1][i]);

    }

    return 0;

}

int printTable(int arr[][10],int n,int m, int number ){

    for(int i = 0; i<m; i++)
    {
        arr[n][i]=number*(i+1);

    }
}