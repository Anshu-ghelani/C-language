#include<stdio.h>
#include<string.h>
 int main()
 {
	char a[15];
	int i,j=0,k;
	
	printf("Enter the string :");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		for(j=i+1;j<strlen(a);j++)
		{
			if(a[i]==' ')
			{
			    i--;
				for(k=j;k<strlen(a);k++)
				{
					a[k-1]=a[k];
					
				}
				j--;
			}
		}
	}

	
		printf("output strimg :%c",a[i]);
	
	return 0;
}
