#include<stdio.h>
#include<conio.h>
void main()
{int x,y,e;
clrscr();
printf("enter the two numbers\n");
scanf("%d%d",&x,&y);
printf("\nx=%d y=%d",x,y);
e=x;
x=y;
y=e;
printf("\nx=%d y=%d",x,y);
getch();
}