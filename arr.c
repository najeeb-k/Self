#include<stdio.h>
#include<conio.h>
void main{
int *p,i;

p=getarray();
for(i=0;i<10;i++)
{
scanf("%d",p[i]);
}
}
int * getarray()
{
static int a[10],i;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
return a;
}

