#include<stdio.h>
#include<conio.h>
void main()
{int n[10],i;
void display(int[]);
clrscr();
for(i=0;i<10;i++)
{printf("enter elements");
scanf("%d",&n[i]);
}
printf("\n numbers\n");
for(i=0;i<10;i++)
{printf("%d",n[i]);}
printf("\n numbers\n");
for(i=0;i<10;i++)
{display(&n[0]);
}
getch();
}