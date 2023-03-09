#include<stdio.h>
#include<conio.h>
main()
{
  int n,p,prime=1;
  clrscr();
  printf("Enter your number :");
  scanf("%d",&p);
  for(n=2;n<p;n++)
  {
    if (p%n==0)
    {
     prime=0;
    }
  }
  if (prime==0)
  {
  printf("the number is not prime");
  }
  else
  {
  printf("the number is  prime");

  }
  getch();
}
