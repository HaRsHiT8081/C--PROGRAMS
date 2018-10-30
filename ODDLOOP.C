#include<stdio.h>
#include<conio.h>
void main()
{char another;
int num;
clrscr();
do
{printf("enter a no");
scanf("%d",&num);
printf("square of %d is %d\n",num,num*num);
printf("want to enter another noy/n");
fflush(stdin);
scanf("%c",&another);
}
while(another=='y');
getch();
}