#include<stdio.h>

int main()
{
  int a,b,c;

  printf("enter the angle a : ");
  scanf("%d",&a);

  printf("enter the angle b : ");
  scanf("%d",&b);

  printf("enter tha angle c : ");
  scanf("%d",&c);

  if (a+b+c<180 || a+b+c>180)
  printf("enter a valid angle , b/c not triangle");


  else if (a == 0 || b == 0 || c == 0)
  printf("enter a valid angle");

  else if (a==60 && b == 60 && c== 60 )
  printf("this is a equilateral triangle");

  else if (a==b || b==c || c==a)
  printf("this is a isoseles triangle");

  else if (a!=b && b!= c && c!=a)
  printf("this is scalene triamgle");

  else
  printf("this is not a triangle b/c its angle sum more than 180");

  return 0;
}