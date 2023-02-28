#include<stdio.h>
#include<conio.h>
main()
{
   int A,h,b;
   clrscr();
   printf("Enter the heigth : ");
   scanf("%d",&h);
   printf("Enter the base : ");
   scanf("%d",&b);
   A=(h*b)/2;
   printf("The area of tringle is :%d",A);
   getch();
}