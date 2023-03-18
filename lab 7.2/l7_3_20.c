#include<stdio.h>

main()

{
	int i;
	
	for(i=0;i<7;i++)
	{
		if(i==0)
		{
			printf("* * * * *");
		}
		if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6)
		{
			printf("    *");
		}
	
		printf("\n");
	}
}
