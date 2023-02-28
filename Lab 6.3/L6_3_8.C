#include<stdio.h>
#include<conio.h>
main()
{
  int sum=0,n,a=1;
  clrscr();
  printf("Enter your number :");
  scanf("%d",&n);
  for(a=1;a<=n;a++)
  {
   sum=sum+a;
   printf("%d\n",sum);
  }

   getch();
}