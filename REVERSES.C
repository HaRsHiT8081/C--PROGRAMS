#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char s[30];
clrscr();
printf("\nenter the string = ");
gets(s);
strrev(s);
printf("\nreversed string = %s",s);
getch();
}