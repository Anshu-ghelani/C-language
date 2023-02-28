#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("Enter your number : ");
  scanf("%d",&n);
  for(a=1;n>=a;n--)
  {
   printf("%d ",n);
  }

   getch();
}