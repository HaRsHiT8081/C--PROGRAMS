#include<stdio.h>
#include<conio.h>
void main()
{int *s[4];
int i=2,j=3,k=4,l=5,m;
clrscr();
s[0]=&i;
s[1]=&j;
s[2]=&k;
s[3]=&l;
for(m=0;m<=3;m++)
printf(" %d ",*(s[m]));
getch();
}