#include<stdio.h>
#include<conio.h>
void main()
{int a[10][10],transpose[10][10],r,c,i,j;
clrscr();
printf("enter rows and coloumns");
scanf("%d%d",&r,&c);
printf("\nenter the elements of matrix\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{printf("enter the elements %d%d: ",i+1,j+1);
scanf("%d",&a[i][j]);
}
printf("\nentered matrix : \n");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{printf("%d ",a[i][j]);
if(j==c-1)
printf("\n\n");
}
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{transpose[j][i]=a[i][j];}
printf("\ntranspose of matrix;\n");
for(i=0;i<c;++i)
for(j=0;j<r;++j)
{printf("%d ",transpose[i][j]);
if(j==r-1)
printf("\n\n");
}
getch();
}






