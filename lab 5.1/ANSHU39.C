#include<stdio.h>
#include<conio.h>
main()
{
   int a,b;
   clrscr();
   printf("Enter the number a: ");
   scanf("%d",&a);
   printf("Enter the number b: ");
   scanf("%d",&b);

   if (a<b)
   {
      printf("a is lesser than b ....");
   }
   else
   {
      printf("b is lesser than a ...");
   }
   getch();
}