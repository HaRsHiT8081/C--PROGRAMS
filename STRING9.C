#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char s1[]="jerry";
char s2[]="ferry";
int i,j,k;
clrscr();
i=strcmp(s1,"jerry");
j=strcmp(s1,s2);
k=strcmp(s1,"jerry boy");
printf("%d%d%d",i,j,k);
getch();
}