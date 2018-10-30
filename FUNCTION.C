#include<stdio.h>
#include<conio.h>
int add(int x ,int y );
void main()
{int a,b,sum;
clrscr();
printf("\nenter the number");
scanf("%d%d",&a,&b);
sum=add(a,b);
printf("\naddition=%d",sum);
getch();
}
int add(int x,int y)
{int s;
s=x+y;
return s;
}