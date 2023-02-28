
#include<stdio.h>
#include<conio.h>
main()
{
  int a=2000;
  clrscr();
  while(a<=3000)
  {
    if(a%4==0)
    {
      printf("%d ",a);
    }
    a++;
  }
  getch();
}