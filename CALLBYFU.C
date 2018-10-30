#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{int a=10,b=20;
swap(&a,&b);
clrscr();
printf("a=%d b=%d\n",a,b);
return 0;
}
void swap(int *x,int *y)
{int t;
t=*x;
*x=*y;
*y=t;
printf("x=%d y=%d\n",*x,*y);
getch();
}