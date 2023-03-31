#include<stdio.h>

int main()
{
	int i,n;
	printf("enter the size of array :");
	scanf("%d",&n);
	
	char a[n];
	char *ptr[n];
	for(i=0;i<n;i++)
	{
	printf("enter the element a[%d] :",i+1);
	scanf(" %c",&a[i]);
	ptr[i]=&a[i];
}
	for(i=0;i<n;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]+=32;
		}
		else
		{
			a[i]-=32;
		}
		printf("%c",a[i]);
	}
	return 0;	
}
