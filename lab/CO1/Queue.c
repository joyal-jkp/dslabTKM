#include<stdio.h>
#include<stdlib.h>
#define N 5
int q[N],n,i,j,front=0,rear=0;
void insert()
{
	if(rear==N)
	{
      printf("Overflow\n");
	}
	else
	{
		printf("Enter value");
		scanf("%d",&n);
		q[rear]=n;
		//printf("\n%d",q[rear]);
		rear++;
		//printf("%d",rear);
	}
}
void delete()
{
	if(front==rear)
	{
		printf("underflow\n");
	}
	else
    {
		printf("deleted element %d",q[front]);
		for(i=0;i<rear+1;i++)
		{
			q[i]=q[i+1];
		}
		rear--;
	}
}
void display()
{
	if(front==rear)
	{
		printf("Underflow");
	}
	else
	{
		//printf("rear:%d;",rear);
		printf("Queue elements:");
		for(i=0;i<rear;i++)
		{
			printf("\t%d",q[i]);
		}
	}
}
void main()
{
	int opt;
	while(1){
	printf("\n1:insert\n2:delete\n3:display");
	printf("Enter your choice");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:insert();
		break;
		case 2:delete();
		break;
		case 3:display();
		break;
		case 0:exit(0);
		default:printf("Wrong choice");
	}
	}
}