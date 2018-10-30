#include<stdio.h>
#include<conio.h>
void linkfloat();
struct address
{char phone[10];
char city[25];
int pin;
};
void main()
{clrscr();
struct emp
{char name[25];
struct address a;
};
struct emp e={"harshit","9336626554","faizabad",4565};
printf("name=%s phone=%s\n",e.name,e.a.phone);
printf("city=%s pin=%d\n",e.a.city,e.a.pin);
getch();
}
void linkfloat()
{int a=0,*b;
b=&a;
a=*b;
}
