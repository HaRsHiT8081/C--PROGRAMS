#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c;
clrscr();
printf("\nenter the three angles");
scanf("%d%d%d",&a,&b,&c);
{if(a+b+c==180)
printf("\ntraingle is valid");
else
printf("\ntraingle is not valid");
}
getch();
}