#include<stdio.h>
#include<conio.h>

main()

{
  int n,rem,rev=0,copy,sum=0;
  clrscr();
  printf("Enter your number : ");
  scanf("%d",&n);
  copy=n;

  while(n>=1)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    sum=sum+rem;
   }

   if(rev*sum==copy)
   {
   printf("The given number is magic number ...");
   }
   else
   {
    printf("The given number is not magic number ...");
   }
   getch();
}