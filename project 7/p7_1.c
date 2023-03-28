#include<stdio.h>
fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
main()
{
	int a;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("\nThe factorial of this number is :%d",fact(a));
}
