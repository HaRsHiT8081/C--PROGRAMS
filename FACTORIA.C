#include<stdio.h>
#include<conio.h>
void main ()
{int i,n,fact=1;
clrscr();
printf("\nenter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{fact=fact*i;}
printf("\n%d!=%d",n,fact);
getch();}