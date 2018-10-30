#include<stdio.h>
#include<conio.h>
struct student
{int roll;
char name[30];
float marks;
};
void main()
{struct student s;
printf("enter rollno");
scanf("%d",&s.roll);
printf("enter name");
scanf("%s",&s.name);
printf("enter the marks");
scanf("%f",&s.marks);
printf("roll=%d",s.roll);
printf("name=%s",s.name);
printf("marks=%f",s.marks);
getch();
}


