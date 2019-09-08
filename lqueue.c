#include<stdio.h>
#include<conio.h>
#include<process.h>
#define size 5
void enqueue(int q[],int *r)
{
	int emp;
	if(*r==size-1)
	printf("Queue full\n");
	else
	{
		printf("Enter employee number.\n");
	      scanf("%d",&emp);
		(*r)++;
		q[*r]=emp;
	}
}
void dequeue(int q[],int *r, int *f)
{
	if(*f>*r)
	printf("Queue is empty\n");
	else
	{
		printf("Assigned : ");
		printf("%d",q[*f]);
		(*f)++;

	}
}
void display(int q[],int *r, int *f)
{
	int i;
	if(*f>*r)
	printf("Queue is empty\n");
	else
	{
		printf("\nqueue list: \n");
		for(i=*f;i<=*r;i++)
		printf("%d\n",q[i]);
	}
}
void main()
{
	int q[20];
	int r=-1;
	int f=0;
	int a;
	clrscr();

	while(1)
	{
		printf("\n1.To apply for job.\n");
		printf("2.To Assign.\n");
		printf("3.To see list.\n");
		printf("4.Exit\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			{
				enqueue(q,&r);
				break;
			}
			case 2:
			{
				dequeue(q,&r,&f);
				break;
			}
			case 3:
			{
				display(q,&r,&f);
				break;
			}
			case 4:
			{
				exit(0);
				break;
			}
			default:
			printf("WRONG CHOICE\n");
		}
	}
	getch();

}
