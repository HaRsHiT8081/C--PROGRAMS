#include<stdio.h>
#include<conio.h>
void main()
{int l,b,area,perimeter;
clrscr();
printf("\nenter the sides");
scanf("%d%d",&l,&b);
area=(l+b);
perimeter=2*(l+b);
printf("\narea is=%d",area);
printf("\nperimeter is=%d",perimeter);
getch();
}