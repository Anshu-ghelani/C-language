#include<stdio.h>
#include<conio.h>
main()
{
  int const a=10;
  int b,c;
  clrscr();
  printf("Enter the value of a : ");
  scanf("%d",&a);
  printf("Enter the value of b : ");
  scanf("%d",&b);
  c=a+b;
  printf("The sum of a and b is :%d",c);
  getch();
}