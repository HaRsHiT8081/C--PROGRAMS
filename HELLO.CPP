#include<stdio.h>
#include<conio.h>
void main()
{float rate,tot;
int qty,dis=0;
clrscr();
printf("\nenter the quantity and rate");
scanf("%d%f",&qty,&rate);
if(qty>1000)
dis=10;
tot=(qty*rate)-(qty*rate*dis/100);
printf("total expense=RS %f",tot);
getch();
}