#include<stdio.h>
#include<conio.h>
main()
{
    int i=1,a;
    clrscr();
    printf("Enter your number :");
    scanf("%d",&a);
    while(i<=10)
    {
       printf("%d * %d=%d\n",i,a,i*a);
       i++;
    }

    getch();

}