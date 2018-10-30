#include<stdio.h>
#include<conio.h>
void main()
{int rad;
float pi=3.14, area,cl;
clrscr();
printf("\nEnter radius of circle");
scanf("%d",&rad);
area=pi*rad*rad;
printf("\nArea of circle=%f",area);
cl=2*pi*rad;
printf("\nCircumference=%f",cl);
getch();
}