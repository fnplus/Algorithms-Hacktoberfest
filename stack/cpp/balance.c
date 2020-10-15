#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int top = -1;
char stack[100];
void push(char a)
{
	stack[top] = a;
	top++;
}
void pop()
{
	if (top == -1)
	{
		printf("Invalid\n");
		exit(0);
	}	
	else	
		top--;
}
void find_top()
{
	if (top == -1)
		printf("Valid\n");
	else
		printf("Invalid\n");
}
int main()
{
	int i;
	char a[50];
	printf("Enter the expression\n");
	scanf("%s", &a);
	for (i = 0; a[i] != '\0';i++)
	{
		if (a[i] == '(')
			push(a[i]);
		else if (a[i] == ')')
			pop();
	}
	find_top();
}
