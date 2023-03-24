#include<stdio.h>
#include<string.h>
main()
{
	int i,j;
	char a[50],count[50];
	
	printf("Enter the string :");
	gets(a);
	
	
	
	for(i=0;i<strlen(a);i++)
	{
	    count[i]=0;
	}
	
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<strlen(a);j++)
		{
		   if(a[i]==a[j])
		   {
		   	 count[i]++;
		   }	
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		printf("\n%c =%d\n",a[i],count[i]);
	}
}
