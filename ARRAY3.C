#include<stdio.h>
#include<conio.h>
void main()
{int s[4][2]={abhi yaha values fill karni hai};
int(*p)[2];
clrscr();
int i,j,*pint;
for(i=0;i<=3;i++)
{p=&s[i];
pint=(int *)p;
printf("\n");
for(j=0;j<=1;j++)
printf( " %d " ,*(pint+j));
}
getch();
}