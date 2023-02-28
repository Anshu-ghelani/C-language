#include<stdio.h>
#include<conio.h>
main()
{
  int n=2000;
  clrscr();
  do
  {
   if(n%4==0)
   printf("%d ",n);
   n++;
  }
  while(n<=3000);
   getch();
}