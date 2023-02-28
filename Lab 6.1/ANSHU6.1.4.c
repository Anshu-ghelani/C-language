#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("Enter the value of n :");
  scanf("%d",&n);
  a=n;
  while(a>=1)
  {
    printf("%d  ",a);
    a--;
  }
  getch();
}