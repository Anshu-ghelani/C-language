#include<stdio.h>

main()

{
	int r,c,i,j,a[r][c],count=0;
	float avg,sum=0;
	printf("Enter the number of row of array  : ");
	scanf("%d",&r);
	
    printf("Enter the number of coulm of array  : ");
	scanf("%d",&c);

    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("Enter the element a[%d][%d] :",i,j);
    		scanf("%d",&a[i][j]);
    		count++;
    		sum=sum+a[i][j];
		}
	}
	
	avg=sum/count;
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d ",a[i][j]);
    		
		}
		printf("\n");
	}
	printf("The length of array is :%d ",count);
	printf("\nThe average of the array is :%f ",avg);
	
}
