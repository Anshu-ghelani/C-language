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
   a=(x*x)+(y*y)+(z*z)+(2*x*y)+(2*x*z)+(2*y*z);
   printf("The answer of (x+y+z)^2 is :%d",a);
   getch();
}
