#include<stdio.h>
#include<conio.h>
main()
{
    float c,f;
    clrscr();
    printf("Enter the temperature in celsius : ");
    scanf("%f",&c);
    p=(c*1.8)+32;
    printf("to convert celsius to fahrenheit answer is :%f",f);
    getch();
}