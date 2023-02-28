#include<stdio.h>
#include<conio.h>
main()
{
   int x,y;
   clrscr();
   printf("Enter the value of x : ");
   scanf("%d",&x);
   printf("Enter the value of y : ");
   scanf("%d",&y);
   printf("The swap of two variabls is : ");
   x=x+y;
   y=x-y;
   x=x-y;
   printf("x=%d\n",x);
   printf("y=%d",y);
   getch();
}