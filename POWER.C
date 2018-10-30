#include<stdio.h>
#include<conio.h>
void main()
{int i,x,y,pow=1;
clrscr();
printf("\nenter the base");
scanf("%d",&x);
printf("\nenter the index");
scanf("%d",&y);
for(i=1;i<=y;i++)
{pow=pow*x;}
printf("\n%d^%d=%d",x,y,pow);
getch();
}