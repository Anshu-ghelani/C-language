#include<stdio.h>
main()
{
	FILE *p;
	int a;
	printf("Enter the data : ");
	scanf("%d",&a);
	
	p=fopen("p10_w_2.txt","r");
	
	if(p!=NULL)
	{
		printf("opened successfully.");
		fprintf(p,"the value of a is : %d",a);
	}
	else
	{
	   printf("Error occured.");	
	}
	printf("\nthe value of a is : %d",a);
}
