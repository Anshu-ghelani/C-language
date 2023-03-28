#include<stdio.h>
#include<string.h>

sum(char a[])
{
	int L;
	printf("Enter the string :");
	gets(a);
	L=strlen(a);
	return L;
}
main()
{
    int L;
    char a[50];
    L=sum(a);
    printf("\nThe length of sting is :%d",L);
}
