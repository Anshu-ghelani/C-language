#include<stdio.h>
#include<string.h>
main()

{
	char a[50],b[15],a1[50],b1[15];
	
	printf("\nTo creat your account enter email and password :\n\n");
	printf("Enter the email : ");
	gets(a);
	printf("Enter the password : ");
	gets(b);
	
	printf("\n\nYour account has been created.\n ");
	
	printf("\n\nTo login in your account Enter email same email and password\n\n");
	printf("Enter the email : ");
	gets(a1);
	printf("Enter the password : ");
	gets(b1);
	
	if(strcmp(a,a1)==0 && strcmp(b,b1)==0)
	{
		puts("\nlog in successfully");
	}
	else
	{
		puts("\nlog in faild ");
	}
}