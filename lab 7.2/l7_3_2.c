#include<stdio.h>

main()
{
	int i;
	
	for (i=0;i<7;i++)
	{
		if(i==0 || i==3 || i==6)
		{
			printf("*  *  *");
		}
		if(i==1 || i==5)
		{
			printf("*\t*");
		}
		if(i==2 || i==4)
		{
			printf("*      *");
		}
		printf("\n");
	}
}
