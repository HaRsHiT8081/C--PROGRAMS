#include<stdio.h>
#include<conio.h>
void main()
{int i=1,m,n;
clrscr();
printf("\nenter the no");
scanf("%d",&n);
do
{m=i*n;
printf("\n%d",m);
i++;}
while(i<=10);
getch();
}
