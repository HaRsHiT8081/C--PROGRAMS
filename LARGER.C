#include<stdio.h>
#include<conio.h>
int larger(int x,int y);
void main()
{int x,y;
clrscr();
printf("enter two no");
scanf("%d%d",&x,&y);
printf("larger no=%d",larger(x,y));
getch();
}
int larger(int x,int y)
{return x>y?x:y;
}