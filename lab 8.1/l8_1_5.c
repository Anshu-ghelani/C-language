#include<stdio.h>

main()

{
	int n,i,a[n],b[n],c[n];
	
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
		c[i]=a[i];
	}
	printf("\n===============\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
		c[n+i]=b[i];
	}
	
	printf("\n===============\n");
	for (i=0;i<n*2;i++)
	{
    printf("%d ",c[i]);
    }
}
