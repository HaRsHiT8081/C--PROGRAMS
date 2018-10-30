#include<stdio.h>
#include<conio.h>
void main()
{char a[20],b[20],c[20]="delhi",*d="lucknow";
clrscr();
printf("enter any city");
scanf("%s",a);
printf("enter other city\n");
gets(b);
printf("first string=%s\n",a);
printf("second string=%s\n",b);
printf("third string=%s\n",c);
printf("fourth string=%s\n",d);
puts(a);
getch();
}