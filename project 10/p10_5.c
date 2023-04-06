#include<stdio.h>

main()
{
	FILE *t,*t1;
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	t=fopen("p10_5_r.c","r");
	t1=fopen("p10_5_w.c","w");
	
	if(t==NULL && t1==NULL)
	{
		printf("you cannot open this file. ");
	}
	else
	{
		printf("you can open this file.");
		fprintf(t,"The value of a is : %d",a);
		fscanf(t,"The value of a is : %d",&a);
		fprintf(t1,"The value of a is : %d",a);
	}
}

