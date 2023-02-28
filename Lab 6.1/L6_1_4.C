#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("Enter your number : ");
  scanf("%d",&n);
  do
  {
   printf("%d ",n);
   n--;
  }
   while(n>=a);
   getch();
}