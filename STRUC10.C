#include<stdio.h>
#include<conio.h>
void linkfloat();
struct students
{int roll,marks;
float per;
char grade,name[20];
};
void main()
{clrscr();
struct students a,b;
struct students s[5];
void swap(struct students *,struct students *);
void display(struct students);
void disp(struct students *);
int i;
printf("enter rollno,name and marks\n");
scanf("%d%s%d",&a.roll,a.name,&a.marks);
a.per=a.marks/30;
if(a.per>=60)
a.grade='a';
else
a.grade='b';
printf("enter rollno,name and marks\n");
scanf("%d%s%d",&b.roll,b.name,&b.marks);
a.per=b.marks/30;
if(b.per>=60)
b.grade='a';
else
b.grade='b';
for(i=0;i<5;i++)
{printf("enter rollno,name and marks\n");
scanf("%d%s%d",&s[i].roll,s[i].name,&s[i].marks);
s[i].per=s[i].marks/30;
if(s[i].per>=60)
s[i].grade='a';
else
s[i].grade='b';}
printf("first=%d%s%d%f%s\n",a.roll,a.name,a.per,a.grade,a.marks);
printf("second=%d%s%d%f%s\n",b.roll,b.name,b.per,b.grade,b.marks);
swap(&a,&b)
printf("first=%d%s%d%f%s\n",a.roll,a.name,a.per,a.grade,a.marks);
printf("second=%d%s%d%f%s\n",b.roll,b.name,b.per,b.grade,b.marks);
for(i=0;i<5;i++)
display(s[i]);
display(s[0]);
getch();
}
void swap(struct students *p,struct students *q)
{struct students r;
r=*p;
*p=*q;
*q=r;
}
void display(struct students p)
printf("%d%s%d%f%s\n",p.roll,p.name,p.per,p.grade,p.marks);
void disp(struct students *p);
{int i;
for(i=0;i<5;i++)
printf("%d%s%d%f%s\n",p->roll,p->name,p->per,p->grade,p->marks);
p=p+1;
}
}
void linkfloat()
{int a=0,*b;
b=&a;
a=*b;
}























