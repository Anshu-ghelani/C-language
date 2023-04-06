#include<stdio.h>
main()
{
	FILE *p;
	char a[50];
	printf("Enter the data : ");
	scanf("%s",&a);
	
	p=fopen("p10_w.c","w");
	
	if(p==NULL)
	{
		printf("Error occured.");
	}
	else
	{
		printf("opened successfully.");
		fprintf(p,"Add data : ");
		fscanf(p,"%s",a);
		fprintf(p,"%s",a);
	}
}
