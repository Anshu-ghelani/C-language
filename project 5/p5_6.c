#include<stdio.h>

int main()

{
	int i,j,r,c;
	
	printf("Enter the number of row : ");
	scanf("%d",&r);
	printf("Enter the number of coulmn : ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],d[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the elements of a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements of second array ...");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the elements of a[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  d[i][j]=a[i][j]+b[i][j]; 
		  printf("%d",d[i][j]);
		  
		}
		printf("\n");
	}
	
	
	return 0;
}
