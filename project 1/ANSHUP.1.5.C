#include<stdio.h>
#include<conio.h>
main()
{
    int gs,har,da,ta,ba;
    clrscr();
    printf("base salary is : ");
    scanf("%d",&ba);
    har=(ba*10)/100;
    printf("%d\n",har);
    da=(ba*5)/100;
    printf("%d\n",da);
    ta=(ba*8)/100;
    printf("%d\n",ta);
    gs=ba+da+har+ta;
    printf("the gross salary is :%d",gs);
    getch();
}