#include<stdio.h>
#include<conio.h>
main()
{
    int A,w,l;
    clrscr();
    printf("Enter the width : ");
    scanf("%d",&w);
    printf("Enter the length : ");
    scanf("%d",&l);
    A=w*l;
    printf("The area of rectangle :%d",A);
    getch();
}