#include<stdio.h>
#include<conio.h>
main()
{
  int a,n=1;
  clrscr();
  printf("Enter your number : ");
  scanf("%d",&a);
  do
  {
   if(n%2==0)
   printf("%d ",n);
   n++;
  }
  while(n<=a);
   getch();
}