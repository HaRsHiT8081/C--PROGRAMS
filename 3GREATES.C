#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,c;
printf("\nenter the three no");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{printf("greatest no is=%d",a);}
else if(b>c)
{printf("greatest no is=%d",b);}
else
{printf("\ngreatest no is=%d",c);}
getch();
}