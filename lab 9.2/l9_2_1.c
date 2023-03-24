#include<stdio.h>
#include<string.h>
main()

{
	char a[15],i,countdigit=0,countstring=0,countcharacter=0;
	


	printf("Enter the password : ");
	gets(a);
	
    for(i=0;i<15;i++)
    {
      if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
      {
      	countcharacter++;
	  }
	  if(a[i]>=48 && a[i]<=57 )
	  {
	  	countdigit++;
	  }
	  if(a[i]>=33 && a[i]<=47 || a[i]>=58 && a[i]<=64 || a[i]>=91 && a[i]<=96)
	  {
	  	countstring++;
	  }
	}
	if( countcharacter>=6 && countdigit>=1 && countstring>=1)
	{
		puts("password is vaild");
	}
	else
	{
		puts("password is invaild");
	}
		
	
}
