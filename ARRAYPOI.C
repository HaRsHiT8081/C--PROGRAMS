#include<stdio.h>
#include<conio.h>
void main()
{int stud[4][2]={{1234,56},
		 {1235,90},
		 {1256,45},
		 {1246,89}
		 };
int i;
clrscr();
for(i=0;i<=3;i++)
printf("adrress of %d th array=%u\n",i,stud[i]);
getch();
}