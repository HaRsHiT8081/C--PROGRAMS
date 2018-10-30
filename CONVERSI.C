#include<stdio.h>
#include<conio.h>
void main()
{float km,ft,inch,mt,cm;
clrscr();
printf("\nenter the distance in km");
scanf("%f",&km);
mt=km*1000;
cm=mt*100;
inch=cm/2.54;
ft=inch/12;
printf("\ndistance in meter=%f",mt);
printf("\ndistance in centimeter=%f",cm);
printf("\ndistance in inches=%f",inch);
printf("\ndistance in feet=%f",ft);
getch();
}

