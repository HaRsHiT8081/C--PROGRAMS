#include<stdio.h>
#include<conio.h>
void main()
{int a[3][3],b[3][3],c[3][3],i,j,k=0;
clrscr();
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("enter first element of matrix\n");
scanf("%d",&a[i][j]);}
}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("enter second element of matrix\n");
scanf("%d",&b[i][j]);}
}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{for(k=0;k<3;k++)
{s=s+a[i][k]+b[k][i];
c[i][j]=s;}
s=0;
}
}
printf("\n first matrix\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("%d\t",a[i][j]);
printf("\n");}
}
printf("\n second matrix\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("%d\t",b[i][j]);
printf("\n");}
}
printf("\n third matrix\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("%d\t",c[i][j]);
printf("\n");}
}
getch();
}


