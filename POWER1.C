#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int b,i,power;
clrscr();
printf("\nenter the base");
scanf("%d",&b);
printf("\nenter the index");
scanf("%d",&i);
power=pow(b,i);
printf("\npower=%d",power);
getch();
}