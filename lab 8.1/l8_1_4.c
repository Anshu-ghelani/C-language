#include<stdio.h>

main()

{
	int n,i,a[n],b[n],sum=0;
	
	printf("Enter the size of your array  : ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("Enter %d  element : ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("Enter %d  element : ",i+1);
		scanf("%d",&b[i]);
	}
	printf("\n===============\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n===============\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
		sum=sum+a[i]+b[i];
	}
	printf("\n===============\n");
	printf("\n The addition of the array is : %d ",sum);
}
