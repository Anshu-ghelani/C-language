#include<stdio.h>
main()
{
	FILE *p,*p1;
	int a;
	printf("Enter the data : ");
	scanf("%d",&a);
	
	p=fopen("p10_w_5.c","w");
	p1=fopen("p10_w_4.c","a");
	
	if(p==NULL && p1==NULL)
	{
		printf("Error occured.");
	}
	else
	{
		printf("opened successfully.");
		fprintf(p,"the value of a is : %d",a);
		fscanf("%d",a);
		fprintf(p1,"the value of a is : %d",a);
	}
	
}
