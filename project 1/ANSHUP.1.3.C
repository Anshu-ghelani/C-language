#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    clrscr();
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Sawp of two variable is : ");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n,",a);
    printf("b=%d",b);
    getch();
}
