#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char name[]="folks!";
char target[20]="hello";
clrscr();
strcat(target,name);
printf("name string=%s\n",name);
printf("target string=%s\n",target);
getch();
}