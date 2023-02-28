#include<stdio.h>
#include<conio.h>
main()
{
   int a,x,y,z;
   clrscr();
   printf("Enter the value of x : ");
   scanf("%d",&x);
   printf("Enter the value of y :");
   scanf("%d",&y);
   printf("Enter the vlaur of z is :");
   scanf("%d",&z);
   a=(x*x*x)+(y*y*y)+(z*z*z)+3*(x+y)*(x+z)*(y+z);
   printf("The answer of (x+y+z)^3 is :%d",a);
   getch();
}