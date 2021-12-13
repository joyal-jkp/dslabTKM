#include<stdio.h>
#include<stdlib.h>
int a[5],b[5],u[10],s,x,y;
printf("Enter universal array limit\n");
scanf("%d",&s);
printf("Enter arrary elements");
for(i=0;i<s;i++)
{
scanf("%d",&u[i]);
}
printf("Enter array one limit\n");
scanff("%d",&x);
printf("Enter array elements\n");
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
printf("Enter array two limit\n");
scanff("%d",&x);
printf("Enter array elements\n");
for(i=0;i<y;i++)
{
scanf("%d",&b[i]);
}

void main()
{
int ch;
printf("Enter your  choice");
printf("1:union\n2:intersection\n3:difference\n");
scanf("%d",&ch);
switch(ch)
{
case 1:union();
break;
case 0:exit(0);
default:printf("Wrong choice")
}
