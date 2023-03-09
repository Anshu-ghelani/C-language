#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    printf("Enter the value of c :");
    scanf("%d",&c);

    (a>b)?(a>c)?printf(" a is maximum...")
	       :(c>b)?printf(" c is maximum...")
		     :(b>c)?printf(" b is maximum...")
			   :printf(" c is maximum...")
	 :(b>c)?printf(" b is maximum...")
	       :printf(" c is maximum...");
    getch();
}