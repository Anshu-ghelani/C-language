#include<stdio.h>

int main()

{
	int i,j;
	int a[3][3];
	int count[10]={0};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the elements of a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    count[a[i][j]]++;	
		}
	}
	for(i=1;i<9;i++)
	{
	  printf(" %d has printed %d times.... \n",i,count[i]);
	}
	
	return 0;
}
