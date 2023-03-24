#include<stdio.h>
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
			if(a[i]==a[j])
			{
				for(k=j;k<strlen(a);k++)
				{
					a[k]=a[k+1];
				}
			}
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
