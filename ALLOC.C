#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{int i,n;
int *p;
clrscr();
printf("how many numbers input\n");
scanf("%d",&n);
p=(int *) calloc (10,sizeof(int));
if(p==NULL)
printf("memory overflow error\n");
else
{for(i=0;i<n;i++)
{printf("enter any number");
scanf("%d",(p+i));
}
printf("\n numbered=\n");
for(i=0;i<n;i++)
{printf("%d",*(p+i));
}
free(p);
}
getch();
}
