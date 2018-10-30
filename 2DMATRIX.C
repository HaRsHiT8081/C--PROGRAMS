#include<stdio.h>
#include<conio.h>
void main()
{int m[4][4],i,j;
clrscr();
for(i=0;i<4;i++)
{for(j=0;j<4;j++)
{printf("enter number [%d] [%d]  ",i+1,j+1);
scanf("%d",&m[i][j]);}
}
printf("matrix=\n");
for(i=0;i<4;i++)
{for(j=0;j<4;j++)
printf("%d\t",m[i][j]);
printf("\n");
}
getch();
}