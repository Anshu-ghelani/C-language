#include<stdio.h>

main()

{
	int i,j,n=1;
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",n+64);
			n++;
		}
	 printf("\n");	
	}
	
}
