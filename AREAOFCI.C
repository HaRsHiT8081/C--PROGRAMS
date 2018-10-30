#include<stdio.h>
#include<conio.h>
void main(){
float radius,area;
clrscr();
printf("\nenter the radius of circle");
scanf("%f",&radius);
area=3.14*radius*radius;
printf("\nArea of circle=%d",&area);
getch();
return(0);
}