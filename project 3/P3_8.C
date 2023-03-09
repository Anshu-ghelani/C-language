#include<stdio.h>
#include<conio.h>
main()
{
 int a,a1=0,a2=1,a3=2,i;
 clrscr();
 printf("Enter your number :");
 scanf("%d",&a);

  for (i=1;i<=a;i++)
 {
  a3=a1+a2;
  a1=a2;
  a2=a3;
  printf("%d ",a3);
 }
 getch();
}