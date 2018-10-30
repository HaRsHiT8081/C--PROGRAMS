#include<stdio.h>
#include<conio.h>
void main()
{int n,reverse=0;
clrscr();
printf("\nenter a no to reverse");
scanf("%d",&n);
while(n!=0)
{reverse=reverse*10;
reverse=reverse+n%10;
n=n/10;
}
printf("\nreverse of entered no is=%d",reverse);
getch();
}