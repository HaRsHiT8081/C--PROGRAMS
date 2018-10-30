#include<stdio.h>
#include<conio.h>
void main()
{int a[5],i,t=0;
clrscr();
for(i=0;i<5;i++)
{printf("enter no %d: ",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{if(t<a[i])
{t=a[i];}
}
printf("\n\n%d is greatest no",t);
getch();
}