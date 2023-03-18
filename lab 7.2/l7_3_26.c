#include<stdio.h>

main()

{
	int i;
	
	for(i=0;i<7;i++)
	{
		if(i==0 || i==6)
		{
			printf("* * * * * ");
		}
		if(i==1)
		{
			printf("       *");
		}
		if(i==2)
		{
			printf("    *");
		}
		if( i==3)
		{
			printf("   *");
		}
		if( i==4)
		{
			printf(" *");
		}
		if( i==5)
		{
			printf("*");
		}
	
		printf("\n");
	}
}
