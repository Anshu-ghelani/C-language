#include<stdio.h>

int main()

{
    int r,c,i,j,a[r][c],sumd,f[r][c];

  
	printf("\nEnter the number of row of array  : ");
	scanf("%d",&r);
	printf("\nEnter the number of coulm of array  : ");
	scanf("%d",&c);

    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("\nEnter the element a[%d][%d] :",i,j);
    		scanf("%d",&a[i][j]);
	       
		}

	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			f[i][j]=a[i][c-1-j];
		}
	}
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{    
	        if (i==j)
			{
			sumd=sumd+f[i][j];
			}
		}
	
	
	}	

    
    	printf("\nSum of anti diagonal  is : %d",sumd);
	
	return 0;
}
	
