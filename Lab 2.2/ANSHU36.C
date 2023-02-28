#include<stdio.h>
#include<conio.h>
main()
{
    float i,p,r,n;
    clrscr();
    printf("Enter the value of p : ");
    scanf("%f",&p);
    printf("Enter the value of r : ");
    scanf("%f",&r);
    printf("Enter the value of n : ");
    scanf("%f",&n);
    i=(p*r*n)/100;
    printf("The simple intrest is :%f",i);
    getch();
}