#include<stdio.h>
#include<conio.h>
main()
 {
  int i,count=0;
  clrscr();
  printf("Enter your number :");
  scanf("%d",&i);

  while(i>0)
  {
    count++;
    i/=10;
  }
  printf("this number has %d digit",count);
  getch();
}