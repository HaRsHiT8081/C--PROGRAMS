#include<stdio.h>
#include<conio.h>
void main()
{int i;
clrscr();
i=0;
while(getchar()!=EOF)
++i;
printf("%d\n",i);
getch();
}