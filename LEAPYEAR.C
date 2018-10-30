#include<stdio.h>
#include<conio.h>
void main()
{int yr;
clrscr();
printf("\nenter the year");
scanf("%d",&yr);
{if(yr%4==0)
printf("\nthe year is leap year");
else
printf("\nthe year is not leap year");
}
getch();
}