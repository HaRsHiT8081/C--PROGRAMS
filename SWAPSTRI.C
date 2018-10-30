#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char s1[30],s2[30],t[30];
clrscr();
printf("\nenter the string 1 : ");
gets(s1);
printf("\nenter the string 2 : ");
gets(s2);
strcpy(t,s1);
strcpy(s1,s2);
strcpy(s2,t);
printf("\nafter swapping  ");
printf("\ns1 = %s \ns2 = %s",s1,s2);
getch();
}