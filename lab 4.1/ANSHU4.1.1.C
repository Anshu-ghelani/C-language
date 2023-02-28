#include<stdio.h>
#include<conio.h>
main()
{
   int a,x,y;
   clrscr();
   printf("Enter the value of x :");
   scanf("%d",&x);
   printf("Enter the value of y :");
   scanf("%d",&y);
   a=(x*x*x)+(y*y*y)+(3*x*x*y)+(3*y*y*x);
   printf("The answer of (x+y)^3 is:%d",a);
   getch();
}