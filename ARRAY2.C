#include<stdio.h>
#include<conio.h>
void main()
{int stud[4][2]={
		   {1234,56},
		   {1212,33},
		   {1434,80},
		   {1312,78}
		   };
int i,j;
clrscr();
for(i=0;i<=3;i++)
{for(j=0;j<=1;j++)
printf(" %d ",*(*(stud+i)+j));
printf("\n");
}
getch();
}