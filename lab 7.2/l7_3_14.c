#include<stdio.h>

main()

{
	int i;
	
	for(i=0;i<7;i++)
	{
		if(i==3)
		{
			printf("*  *  * ");
		}
			if(i==4)
		{
			printf("*   * * ");
		}
		if(i==2)
		{
			printf("* *   * ");
		}
		if(i==1 || i==0 || i==5 || i==6)
		{
			printf("*     *");
		}
		printf("\n");
	}
}
