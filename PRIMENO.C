#include<stdio.h>
#include<conio.h>
void main()
{int x,i;
clrscr();
printf("enter a number= ");
scanf("%d",&x);
for(i=2;i<=x;i++)
if(x%2==0)
break;
if(i==x)
printf("%d is primr number",x);
else
printf("%d is not a prime number",x);
getch();
}
