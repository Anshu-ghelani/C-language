#include<stdio.h>
#include<conio.h>
main()

{
   char a;
   clrscr();
   printf("press m for monday\n");
   printf("press t for tuesday\n");
   printf("press w for wednesday\n");
   printf("press T for thursday\n");
   printf("press f for friday\n");
   printf("press s for satureday\n");
   printf("press S for sunday\n");
   scanf("%c",&a);

   switch (a)
   {
     case 'm': printf("today is monday");
     break;
     case 't': printf("today is tuesday");
     break;
     case 'w': printf("today is wednesday");
     break;
     case 'T': printf("today is thuresday");
     break;
     case 'f': printf("today is friday");
     break;
     case 's': printf("today is satureday");
     break;
     case 'S': printf("today is sunday");
     break;
     default:
     printf("invaild choise");


   }
   getch();
}