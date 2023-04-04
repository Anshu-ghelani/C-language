#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	int *ptr;
	ptr=&a;
	
	for(i=0;i<n;i++)
	{
		printf("Enter elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));;
	
	}
}
