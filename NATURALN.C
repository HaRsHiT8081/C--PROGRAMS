#include<stdio.h>
#include<conio.h>
void main()
{int n,s=0,i;
clrscr();
printf("enter a natural number");
scanf("%d",&n);
for(i=1;i<=n;i++)
s=s+i;
printf("sum is %d",s);
getch();
}