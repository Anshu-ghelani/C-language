#include<stdio.h>
sum(int *a,int *b)
{
	printf("Enter a : ");
	scanf("%d",a);
	printf("Enter b : ");
	scanf("%d",b);
	
	printf("\nThe sum of a and b is :%d\n",*a+*b);
}
main()
{
	int a,b;
	sum(&a,&b);
	printf("\nThe value of a is :%d",a);
	printf("\nThe value of b is :%d",b);
}
