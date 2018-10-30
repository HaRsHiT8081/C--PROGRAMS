#include<stdio.h>
#include<conio.h>
void linkfloat();
void display(char *,char *,int);
struct book
{char name[25];
char author[25];
int callno;
};
void main()
{clrscr();
struct book b1={"harshit","boss",101};
display(b1.name,b1.author,b1.callno);
getch();
}
void display(char *s,char *t,int n)
{printf("%s %s %d\n",s,t,n);}
void floatlink()
{int a=0,*b;
b=&a;
a=*b;
}
