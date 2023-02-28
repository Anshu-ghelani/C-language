
#include<stdio.h>
#include<conio.h>
main()
{
  int a,n=1;
  clrscr();
  printf("Enter your number : ");
  scanf("%d",&a);
  for(n=1;n<=a;n++)
  {
   if(n%2!=0)
   printf("%d ",n);

  }
   getch();
}