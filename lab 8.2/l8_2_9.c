#include<stdio.h>

main()

{
	
	int n,i,j,sumd1=0,sumd2=0,a[n][n],d[n][n];
	
	printf("Enter the size of 2D array : "); scanf("%d",&n);
	
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element a[%d][%d] : ",i,j); scanf("%d",&a[i][j]);
		}	
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][n-1-j];
		}	
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			sumd1=sumd1+a[i][j];
			sumd2=sumd2+d[i][j];
			}	
		}	
	}
		
	printf("The array in Matrix form : \n");
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
	
	printf("Flipped Matrix : \n");
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");	
	}

	printf("Cross diagonal sum is : %d",sumd1+sumd2);	
	
}
