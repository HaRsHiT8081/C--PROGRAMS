#include<stdio.h>
#include<conio.h>
void main()
{int n;
clrscr();
printf("\nenter the number");
scanf("%d",&n);
switch(n)
{ case 0:printf("\nzero");
break;
case 1:printf("\nfirst");
break;
case 2:printf("\nsecond");
break;
case 3:printf("\nthird");
break;
case 4:printf("\nfourth");
break;
case 5:printf("\nfifth");
break;
default:printf("\nenter no");
}
getch();
}
