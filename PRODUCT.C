#include<stdio.h>
#include<conio.h>
void main()
{int n,p=1,i;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
p=p*i;
printf("product is %d",p);
getch();
}