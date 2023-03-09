#include<stdio.h>
#include<conio.h>
main()

{
  int fact=1,i;
  clrscr();
  printf("Enter your number :");
  scanf("%d",&i);

  for(fact=1;i>0;i--)
  {
   fact=fact*i;
  }
  printf("\n The factorial of given number is :%d",fact);
  getch();
}