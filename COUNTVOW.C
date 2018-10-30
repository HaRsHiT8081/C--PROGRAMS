#include<stdio.h>
#include<conio.h>
void main()
{char line[150];
int i,vowels,consonant,digits,spaces;
vowels=consonant=digits=spaces=0;
clrscr();
printf("enter a linr of string");
scanf("%[^\n]",line);
for(i=0;line[i]!='\0';++i)
{if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
line[i]=='o' || line[i]=='u' || line[i]=='A' |
line[i]=='E' || line[i]=='I' || line[i]=='O' ||
line[i]=='U')
{++vowels;}
else if((line[i]>='a'&& line[i]<='z')||(line[i]>='A'&&line[i]<='Z'))
{++consonant;}
else if(line[i]>='0'&&line[i]<='9')
{++digits;}
else if(line[i]==' ')
{++spaces;}
}
printf("vowels is %d",vowels);
printf("\nconsonant is %d",consonant);
printf("\ndigits is %d",digits);
printf("\nwhite spaces is %d",spaces);
getch();
}



