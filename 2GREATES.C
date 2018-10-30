#include<stdio.h>
#include<conio.h>
void main()
{int x,y;
clrscr();
printf("\nenter the two no");
scanf("%d%d",&x,&y);
if(x>y)
{printf("\n%d is greatest no",x);}
if(x<y)
{printf("\n%d is greatest no",y);}
getch();
}