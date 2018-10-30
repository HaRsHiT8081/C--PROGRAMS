#include<stdio.h>
#include<conio.h>
void main()
{int a,b,h;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
for(h=a<b?a:b; h>=1; h--)
if(a%h==0 && b%h==0)
break;
printf("HCF is %d",h);
getch();
}