#include<stdio.h>
#include<conio.h>
main()
{
   int x,y,z;
   clrscr();
   printf("Enter the value of x : ");
   scanf("%d",&x);
   printf("Enter the value of y : ");
   scanf("%d",&y);
   printf("The swap of two variabls is : ");
   z=x;
   x=y;
   y=z;
   printf("x=%d,\n",x);
   printf("y=%d",y);
   getch();
}