#include<stdio.h>
#include<conio.h>
void main()
{int x,y,p=1,i;
clrscr();
printf("enter a number and its power\n");
scanf("%d%d",&x,&y);
for(i=1;i<=y;i++)
p=p*x;
printf("result is %d",p);
getch();
}