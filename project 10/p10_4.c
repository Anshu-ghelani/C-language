#include<stdio.h>
main()
{
	FILE *p;
	int a;
	printf("Enter the data : ");
	scanf("%d",&a);
	
	p=fopen("p10_w_4.c","a");
	
	if(p==NULL)
	{
		printf("Error occured.");
	}
	else
	{
		printf("opened successfully.");
		fprintf("the value of a is : %d",a);
		fscanf("%d",a);
		fprintf("the value of a is : %d",a);
	}
	
}
