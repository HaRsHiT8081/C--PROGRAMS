#include<stdio.h>
#include<conio.h>
void main()
{int m1,m2,m3,m4,m5,aggr;
float per;
clrscr();
printf("\nenter the marks");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
aggr=m1+m2+m3+m4+m5;
per=aggr/5;
printf("\naggerate marks=%d",aggr);
printf("\npercentage marks=%f",per);
getch();
}