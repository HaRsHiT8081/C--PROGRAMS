#include<stdio.h>
int main()
{int c,n,cp;
n=0;
c=0;
while(1)
{cp=c;
c=getchar();
if(c=='\n')
{n++;
continue;
}
if(c==EOF && cp=='\n')break;
if(c==EOF)
{n++;
break;
}
}
printf("%d\n",n);
return 0;
}