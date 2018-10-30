#include<stdio.h>
#include<conio.h>
void main()
{int i,n,arr[100];
clrscr();
printf("enter the total no of elements");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{printf("enter number %d: ",i+1);
scanf("%d",&arr[i]);
}
for(i=1;i<n;i++)
{if(arr[0]<arr[i])
arr[0]=arr[i];
}
printf("largest element =%d",arr[0]);
getch();
}