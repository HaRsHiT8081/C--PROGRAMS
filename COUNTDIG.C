#include<stdio.h>
#include<conio.h>
void main()
{int count=0,x;
clrscr();
printf("enter a number");
scanf("%d",&x);
while(x!=0)
{x=x/10;
count++;
}
printf("total digits=%d",count);
getch();
}
