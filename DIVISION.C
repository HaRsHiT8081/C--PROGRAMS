#include<stdio.h>
#include<conio.h>
int div (int x,int y);
void main()
{int a,b,d;
clrscr();
printf("\nenter the two number");
scanf("%d%d",&a,&b);
d=div(a,b);
printf("\ndivision is=%d",d);
getch();
}
int div(int x,int y)
{int dv;
dv=(int)x/y;
return(dv);
}