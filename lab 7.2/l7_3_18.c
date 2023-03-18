#include<stdio.h>

main()

{
	int i;
	
	for(i=0;i<7;i++)
	{
		if(i==0)
		{
			printf(" * * * ");
		}
		if(i==1 || i==5)
		{
			printf("*     *");
		}
		if(i==2 || i==4)
		{
			printf("*    *");
		}
			if(i==3)
		{
			printf("* * *");
		}
		if(i==6)
		{
			printf("*       *");
		}
		printf("\n");
	}
}
