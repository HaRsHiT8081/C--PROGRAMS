#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char s [20];
int x;
clrscr();
printf("\nenter the string  ");
gets(s);
x=strlen(s);
printf("\nlength of the string=%d",x);
getch();
}