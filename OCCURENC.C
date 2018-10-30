#include<stdio.h>
#include<conio.h>
void main()
{int a[5],i,n,c=0;
clrscr();
for(i=0;i<5;i++)
{printf("enter no %d: ",i+1);
scanf("%d",&a[i]);
}
printf("\nenter the digit to find:");
scanf("%d",&n);
for(i=0;i<5;i++)
{if(a[i]==n)
{c++;}
}
printf("%d occurs %d times",n,c);
getch();
}