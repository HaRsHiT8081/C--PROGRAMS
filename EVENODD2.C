#include<stdio.h>
#include<conio.h>
void main()
{int x;
clrscr();
printf("enter number");
scanf("%d",&x);
if(x&1)
printf("odd number");
else
printf("even number");
getch();
}