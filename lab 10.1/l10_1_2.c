//TSRN
#include<stdio.h>

main()
{
	int a,b=3,c=5;
	printf("Enter the number : ");
	scanf("%d",&a);
	sum (a,b,c);
}
sum(int a,int b,int c)
{
	if(a%b==0 && a%c==0)
	{
		printf("\nThe given number is divisible by 3 & 5.");
	}
	else
	{
		printf("\nThe given number is not divisible by 3 & 5.");
	}
}

