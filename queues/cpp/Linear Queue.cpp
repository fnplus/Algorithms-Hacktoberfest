/*Insertion and Deletion using LINEAR QUEUE*/
/*QUEUE follows the FIFO(First in and First out) rule.*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 30
void qinsert();
void qdelete();
void display();
int queue[MAX];
int front=-1,rear=-1,value;
int main()
{
	int ch;
	printf("\nInsertion and Deletion operation using Linear Queue.\n");
	while(true)
	{
		printf("\nMENU:\n");
		printf("Press 1 for Insertion.\n");
		printf("Press 2 for Deletion.\n");
		printf("Press 3 for Display.\n");
		printf("Press 4 for EXIT.\n");
		printf("Enter your choice:\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:qinsert();
			break;
			case 2:qdelete();
			break;
			case 3:display();
			break;
			case 4:exit(1);
			default :system("cls");
			printf("\nInvalid choice.\n ");
		}
	}
	return 0;
}
void qinsert(){
	system("cls");
	if(rear==MAX-1)
	{
		printf("\nQueue is full.\n");
	}
	else
	{
		rear=rear+1;
		printf("\nInsert an element:\t");
		scanf("%d",&value);
		queue[rear]=value;
		printf("\nInsertion successful.\n");
		if(front==-1)
		front=0;
	}
}
void qdelete(){
	system("cls");
	if(front==-1||rear==-1)
	{
		printf("\nQueue is empty.\n");
	}
	else
	{
		value=queue[front];
		printf("\n%d succesfully deleted.\n",value);
		if(rear==front)
		{
			rear=-1;
			front=-1;
		}
		else
		front++;
	}
}
void display(){
	system("cls");
	int i;
	if(rear==-1&&front==-1)
	{
		printf("\nQueue is empty.\n");
		return;
	}
	else
	{
		printf("\nInserted elements are:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
		printf("\n");
	}
}
