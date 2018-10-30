#include<stdio.h>
#include<conio.h>
void main()
{int n,revint=0,remainder,originalint;
clrscr();
printf("enter a number");
scanf("%d",&n);
originalint=n;
while(n!=0)
{remainder=n%10;
revint=revint*10+remainder;
n=n/10;
}
if(originalint==revint)
printf("%d is palindrome",originalint);
else
printf("%d is not palindrome",originalint);
getch();
}

