#include<stdio.h>
#include<string.h>

main()

{
	
	int i,j,A,b,count=0;
	
	printf("Enter the size of array : "); 
	scanf("%d",&A);
	printf("Enter the length of string : ");
    scanf("%d",&b);
	
	char a[A][b];
	
	for(i=0;i<A;i++)
	{
		printf("Enter a string : \n");
		for(j=0;j<b;j++)
		{
		scanf(" %c",&a[i][j]);
		}
	}
	for(i=0;i<A;i++)
	{
		for(j=0;j<b;j++)
		{
		printf("%c",a[i][j]);
		}
		printf("\n");
		count++;
	}
	printf("Number of string is : %d",count);
}
