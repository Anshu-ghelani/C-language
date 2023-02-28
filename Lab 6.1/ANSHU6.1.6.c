#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("Enter the value of n :");
  scanf("%d",&n);
  a=n;
  while(n>=1)
  {
    if(n%2==0)
    {
    printf("%d  ",n);
    }
    n--;
  }
  getch();
}
