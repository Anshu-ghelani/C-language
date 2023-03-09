#include<stdio.h>
#include<conio.h>
main()
{
  char letter='a';
  clrscr();

  do
  {
    printf("%c ",letter);
    letter++;
  }
  while(letter<='z');
  getch();
}