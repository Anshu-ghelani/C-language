#include<stdio.h>
#include<conio.h>
main()
{
  int n,fact=1;
  clrscr();
  printf("Enter your number :");
  scanf("%d",&n);
  do
  {

   fact=fact*n;
   printf("%d ",n);
   n--;

  }
   while(n>0);
   printf("\nthe answer is :%d",fact);
   getch();
}