#include<stdio.h>
#include<conio.h>
void main()
{int n,sum=0,c,value;
clrscr();
printf("enter the numbers\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(c=1;c<=n;c++)
{scanf("%d",&value);
sum=sum+value;
}
printf("sum of integers=%d\n",sum);
getch();
}

