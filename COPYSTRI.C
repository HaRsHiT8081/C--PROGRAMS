#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char s1[30],s2[30];
clrscr();
printf("\nenter the string (s1) ");
gets(s1);
strcpy(s2,s1);
printf("\ncopied string(s2) : %s",s2);
getch();
}