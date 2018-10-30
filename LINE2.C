#include<stdio.h>
int main()
{int c;
while((c=getchar())!=EOF)
{if(c=='\t')
printf("\\t");
if(c=='\b')
printf("\\\\");
if(c!='\b')
if(c!='\t')
if(c!='\\')
putchar(c);
return 0;
}
}