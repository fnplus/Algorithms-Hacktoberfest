#include<stdio.h>
#define SIZE 50   
#include<ctype.h>       
int s[SIZE];
int top=-1;      
void push(int elem)
{                      
    s[++top]=elem;
}
int pop()
{                    
    return(s[top--]);
}
int main()
{                        
    char pofx[50],ch;
    int i=0,op1,op2;
    printf("Enter the Postfix Expression: \n");
    scanf("%s",pofx);
    while( (ch=pofx[i++]) != '\0')
    {
    if(isdigit(ch)) push(ch-'0');
    else
    {      
     op2=pop();
     op1=pop();
     switch(ch)
     {
     case '+':
     push(op1+op2);
     break;
     case '-':
     push(op1-op2);
     break;
     case '*':
     push(op1*op2);
     break;
     case '/':
     push(op1/op2);
     break;
     }
    }
    }
    printf("\n Given Postfix Expression: %s\n",pofx);
    printf("\n Result after Evaluation: %d\n",s[top]);
    return 0;
}