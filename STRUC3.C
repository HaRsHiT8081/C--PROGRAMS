#include<stdio.h>
#include<conio.h>
#include<string.h>
void linkfloat();
struct employee
{char name[10];
int age;
float salary;
};
void main()
{struct employee e1={"harshit" , 19, 65000};
struct employee e2,e3;
clrscr();
strcpy(e2.name,e1.name);
e2.age=e1.age;
e2.salary=e1.salary;
e3=e2;
printf("%s %d %f\n", e1.name, e1.age,e1.salary);
printf("%s %d %f\n", e2.name, e2.age,e2.salary);
printf("%s %d %f\n", e3.name, e3.age,e3.salary);
getch();
}
void floatlink()
{int a=0,*b;
b=&a;
a=*b;
}