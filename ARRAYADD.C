#include<stdio.h>
#include<conio.h>
void main()
{int a [5];
int i,sum=0,avg;
clrscr();
for(i=0;i<5;i++)
{printf("\nenter number %d=",i+1);
scanf("%d",&a[i]);
sum=sum+a[i];}
avg=sum/10;
printf("\nsum=%d\naverage=%d",sum,avg);
getch();
}