#include<stdio.h>

main()

{
	
	int r,c,i,j,sum=0,a[r][c];
	
	printf("Enter the number of row: "); scanf("%d",&r);
	printf("Enter the number column: "); scanf("%d",&c);
		
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element a[%d][%d] : ",i,j); scanf("%d",&a[i][j]);
		}	
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i!=0&&j!=0&&i!=r-1&&j!=c-1)
			{
			sum=sum+a[i][j];
			}	
		}	
	}
		
	
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
	
	printf("Sum of the Inner elements of the array is : %d",sum);	

}
