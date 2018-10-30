#include<stdio.h>
#include<conio.h>
#include<string.h>
void linkfloat();
struct students
{int roll,marks;
float per;
char grade;
char name[20];
};
void main()
{clrscr();
struct students a={123,450,90.0,'a',"harshit"};
struct students b,c;
b.roll=125;
strcpy(b.name,"aman");
b.marks=300;
b.per=b.marks/15.0;
if(b.per>=60)
b.grade='a';
else
b.grade='b';
printf("enter rollno,name,marks,percent and grade\n");
scanf("%d%s%d%f%c",&c.roll,c.name,&c.marks,&c.per,&c.grade);
printf(" first round=%d %s %d %f %c\n",a.roll,a.name,a.marks,a.per,a.grade);
printf(" second round=%d %s %d %f %c\n",b.roll,b.name,b.marks,b.per,b.grade);
printf(" third round=%d %s %d %f %c\n",c.roll,c.name,c.marks,c.per,c.grade);
getch();
}
void linkfloat()
{int a=0,*b;
b=&a;
a=*b;
}
