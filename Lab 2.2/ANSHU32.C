#include<stdio.h>
#include<conio.h>
main()
{
     float A,R;
     clrscr();
     printf("Enter the radius of circle : ");
     scanf("%f",&R);
     A=3.14*(R*R);
     printf("Area of circle is :%f",A);
     getch();
}