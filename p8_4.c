#include<stdio.h>
main()
{
	char a[100];
	char *ptr;
	int len;
	ptr=&a;
	
	printf("Enter the string : ");
	gets(a);
	
	while(*ptr!=NULL)
	{
		len++;
		ptr++;
	}
	printf("The length string is :%d",len);
}
