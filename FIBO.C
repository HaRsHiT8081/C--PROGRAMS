#include<stdio.h>
#include<conio.h>
 main()
{int fib(int);
int i,n;
clrscr();
printf("how many numbers of fibonacci you want to enter");
scanf("%d",&n);
for(i=1;i<n;i++)
printf(" %d ",fib(i));
getch();
}
int fib(int n)
{if(n==1||n==2)
return(1);
return(fib(n-1)+fib(n-2));
}


