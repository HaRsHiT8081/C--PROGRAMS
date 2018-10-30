#include<stdio.h>
#include<conio.h>
void main()
{char name[]="amit kumar";
char city[20],nm[30];
clrscr();
printf("enter city name");
scanf("%s",city);
printf("name=%s\n",name);
printf("city=%s\n",city);
printf("enter any name");
gets(nm);
printf("name=%s\n",nm);
puts(nm);
getch();
}