#include<stdio.h>
#include<conio.h>
void main()
{int a,b,l;
clrscr();
printf("enter two varaible\n");
scanf("%d%d",&a,&b);
for(l=1;l<=a*b;l++)
if(l%a==0&&l%b==0)
break;
printf("LCM is %d",l);
getch();
}