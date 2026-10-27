#include<stdio.h>
#include<stdlib.h>

int main()
{
    float*ptr;
    ptr = (float*)malloc(3*sizeof(float));

    ptr[0]=100;
    ptr[1]=160;
    ptr[2]=210;

    for(int i = 0; i<3; i++)
    {
      printf("%f\n",ptr[i]);
    }

    return 0;
}