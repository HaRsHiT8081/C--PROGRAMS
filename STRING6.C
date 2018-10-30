#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char arr[]="harshit";
int l1,l2;
clrscr();
l1=strlen(arr);
l2=strlen("humpty dumpty");
printf(" string=%s length=%d\n",arr,l1);
printf(" string=%s length=%d\n","humpty dumpty",l2);
getch();
}