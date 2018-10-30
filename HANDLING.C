#include<stdio.h>
#include<conio.h>
void main()
{FILE *P;
int roll,name[15],marks,a;
clrscr();
P=fopen("students.txt","r");
for(a=1;a<=5;a++)
{printf("enter rollno,name and marks\n");
scanf("%d %s %d",&roll,name,&marks);
fprintf(P,"%d %s %d\n",roll,name,marks);
}
fclose(P);
getch();
}