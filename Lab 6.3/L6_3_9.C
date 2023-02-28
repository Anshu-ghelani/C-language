#include<stdio.h>
#include<conio.h>
main()
{
   int n,fact=1;
   clrscr();
   printf("Enter your number :");
   scanf("%d",&n);

   for(fact=1;n>0;n--)
   {
    fact=fact*n;
    printf("%d ",n);

   }

   printf("\nThe factorial of all number is :%d",fact);
   getch();

}
