#include<stdio.h>
#include<conio.h>

main()

{
  int n,rem,rev=0,copy;
  clrscr();
  printf("Enter your number : ");
  scanf("%d",&n);

  copy=n;
  while(n>=1)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
   }
  printf("Reverse number is :%d",rev);
    if(copy==rev)
    {
     printf("\nThe given number is palidrome... ");
    }
    else
    {
    printf("\nThe given number not is palidrome... ");
    }
  getch();
}