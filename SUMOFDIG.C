#include<stdio.h>
#include<conio.h>
void main()
{int x,r,s=0;
printf("enter the number");
scanf("%d",&x);
clrscr();
while(x!=0)
{r=x%10;
s=s+r;
x=x/10;
}
printf("sum of digits=%d ",s);
getch();
}