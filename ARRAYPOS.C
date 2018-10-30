#include<stdio.h>
#include<conio.h>
void main()
{int a[5],i,n=0,p=0;
clrscr();
for(i=0;i<5;i++)
{printf("enter no %d: ",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{if(a[i]>0)
{p++;}
}
{if(a[i]<0)
{n++;}
}
printf("\npositive no=%d",p);
printf("\nnegative no=%d",n);
getch();
}