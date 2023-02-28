#include<stdio.h>
#include<conio.h>
main()
{
   int i=1,a;
   clrscr();
   printf("Enter your number :");
   scanf("%d",&a);

   for(i=1;i<=10;i++)
   {

    printf("%d * %d = %d\n",i,a,i*a);

   }

   getch();

}
