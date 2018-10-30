#include<stdio.h>
#include<conio.h>
void main()
{int i=3,*x;
float j=1.5,*y;
char k='c',*z;
clrscr();
printf("value of i=%d\n",i);
printf("value of j=%f\n",j);
printf("value of k=%c\n",k);
x=&i;
y=&j;
z=&k;
printf("original address in x=%u\n",x);
printf("original address in y=%u\n",y);
printf("original address in z=%u\n",z);
x++;
y++;
z++;
printf("new address in x=%u\n",x);
printf("new address in y=%u\n",y);
printf("new address in z=%u\n",z);
getch();
}


