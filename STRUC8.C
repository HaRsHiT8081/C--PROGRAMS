#include<stdio.h>
#include<conio.h>
void linkfloat();
struct book
{char name[25];
char author[25];
int callno;
};
void main()
{clrscr();
struct book b1={"harshit","happy",101};
struct book *ptr;
ptr=&b1;
printf("%s%s%d\n",b1.name,b1.author,b1.callno);
printf("%s%s%d\n",ptr->name,ptr->author,ptr->callno);
getch();
}
void linkfloat()
{int a=0,*b;
b=&a;
a=*b;
}