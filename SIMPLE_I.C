#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,interest;
clrscr();
printf("\nenter the principle,rate,time");
scanf("%d%d%d",&a,&b,&c);
interest=a*b*c/100;
printf("\ninterest is=%d",interest);
getch();
}
