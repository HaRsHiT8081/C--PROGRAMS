#include<stdio.h>
#include<conio.h>
void main()
{int a[5],i;
clrscr();
for(i=0;i<5;i++)
{printf("enter numbers %d:",i+1);
scanf("%d",&a[i]);
}
printf("\nsquares are =");
for(i=0;i<5;i++)
{printf("\n%d",a[i]*a[i]);
}
getch();
}