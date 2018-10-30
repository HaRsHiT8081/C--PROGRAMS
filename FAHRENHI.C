#include<stdio.h>
#include<conio.h>
void main ()
{float fahren,centi;
clrscr();
printf("\nenter the temp in fahrenhiet");
scanf("%f",&fahren);
centi=5/9*(fahren-32);
printf("\ncentimeter is=%f",centi);
getch();
}
