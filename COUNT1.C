#include<stdio.h>
int main()
{int c,nb,nt,nl;
nb=0;
nl=0;
nt=0;
while((c=getchar())!='*')
{if(c==' ')
++nb;
if(c=='\t')
++nt;
if(c=='\n')
++nl;
}
printf("%d%d%d\n",nb,nt,nl);
return 0;
}
