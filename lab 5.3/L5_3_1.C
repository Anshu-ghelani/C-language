#include<stdio.h>
#include<conio.h>
main()
{
  char j,f,a,m,M,J,ju,au,s,o,n,d,x;
  clrscr();
  printf("Enter j for january :\n");
  printf("Enter f for fabruary :\n");
  printf("Enter m for march :\n");
  printf("Enter a for april :\n");
  printf("Enter M for may :\n");
  printf("Enter J for june :\n");
  printf("Enter ju for july :\n");
  printf("Enter au for august :\n");
  printf("Enter s for september :\n");
  printf("Enter o for october :\n");
  printf("Enter n for november :\n");
  printf("Enter d for december :\n");
  scanf("%c",&x);

  switch(x)
  {
   case 'j' :
   printf("this month is january");
   break;

   case 'f' :
   printf("this month is february");
   break;

   case 'm' :
   printf("this month is march");
   break;

   case 'a' :
   printf("this month is april");
   break;

   case 'M' :
   printf("this month is may");
   break;

   case 'J' :
   printf("this month is june");
   break;

   case 'ju' :
   printf("this month is july");
   break;

   case 'au' :
   printf("this month is august");
   break;

   case 's' :
   printf("this month is september");
   break;

   case 'o' :
   printf("this month is octomber");
   break;

   case 'n' :
   printf("this month is november");
   break;

   case 'd' :
   printf("this month is december");
   break;

   default:
   printf("invaild choice");
  }
  getch();
}