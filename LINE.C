#include<stdio.h>
#include<conio.h>
void main()
{int n,c1;
clrscr();
c1=0;
while((n=getchar())!=EOF)
if(n=='\n')
++c1;
printf("%d\n",c1);
getch();
}