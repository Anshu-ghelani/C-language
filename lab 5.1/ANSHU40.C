#include<stdio.h>
#include<conio.h>
main()
{
   char a;
   clrscr();
   printf("Enter the character : ");
   scanf("%c",&a);

   if(a>=65 && a<=90)
   {
      printf("The character is capital alphabet ....");
   }
   else  if(a>=97 && a<=122)
   {
      printf("The character is samll alphabet .... ");
   }
   else if(a>=48 && a<=57)
   {
      printf("The character is natural number....");
   }
   else
   {
     printf("The chracter is special symbol ....");
   }
   getch();
}