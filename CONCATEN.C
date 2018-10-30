#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char s1[30],s2[30];
clrscr();
printf("\nenter the string (s1)  ");
gets(s1);
printf("\nenter the string (s2)  ");
gets(s2);
strcat(s2,s1);
printf("\nconcatenated string : %s",s2);
getch();
}