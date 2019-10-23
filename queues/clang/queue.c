#include<stdio.h>
#include<limits.h>

#define MAX 5

struct Queue 
{
	int data[MAX];
	int front,rear;
};

int retrieve(struct Queue *q)
{
	int item;
	if(q->front==-1 && q->rear==-1)
	{
		printf("\nUnderflow");
		return INT_MIN;
	}
	else if(q->front==q->rear && q->front!=-1)
	{
		item=q->data[q->front];
		q->front=q->rear=-1;
		return item;
	}
	else
		return q->data[q->front++];
		
}
void insert(struct Queue *q,int item)
{
	if(q->rear==MAX-1)
	{
		printf("\nOverflow");
		return;
	}
	q->front=0;
	q->rear++;
	q->data[q->rear]=item;
	printf("\nElement inserted successfully..:)");
}


int main()
{
	int choice;
	struct Queue q;
	q.front=q.rear=-1;
	while(1)
	{
		printf("\n1. Insert\n2. Retrieve\n3. Exit");
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: int item;
					printf("\nEnter the element you want to insert:");
					scanf("%d",&item);
					insert(&q,item);
				
					break;
			case 2: item=retrieve(&q);
					if(item!=INT_MIN)
						printf("\n%d deleted",item);
					break;
			case 3: return 0;
			default: printf("WRONG INPUT!!!!!!");
		}
	}
	return 0;
}
