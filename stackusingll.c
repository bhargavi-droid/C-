#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int data;
	struct stack *next;
}STACK;
STACK *top=NULL;
int count=0;
void push(int);
int pop();
int peek();
void display();
void push(int info)
{
	STACK *newnode=(STACK*)malloc(sizeof(STACK));
	{
		printf("Stack Overflow");
		return;
	}
	newnode->data=info;
	newnode->next=NULL;
	if(top==NULL)
	top=newnode;
	else{
		newnode->next=top;
		top=newnode;
	}
	count++;
	printf("%d is pushed to stack\n",info);
}
int pop()
{
	int ele;
	if(top==NULL)
	{
		printf("Stack is underflow\n");
		return-1;
	}else{
		STACK *temp=top;
		top=top->next;
		ele=temp->data;
		count--;
		free(temp);
		return ele;
	}
}
int peek()
{
	if(top==NULL){
	printf("Stack is undeflow\n");
	return-1;
}
else{
	return top->data;
}
}
void display()
{
	if(top==NULL)
	{
		printf("Stack is empty\n");
	}else{
		STACK *temp=top;
		printf("\n**Stack elements**");
		while(temp!=NULL)
		{
			printf("\t%d\n",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int ch,ele;
	do
	{
		printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter element:");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2:
				ele=pop();
				if(ele!=-1)
				 printf("popped element is %d\n",ele);
				 break;
			case 3:
				ele=peek();
				if(ele!=-1)
				 printf("The top most element is %d\n",ele);
				 break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid choice\n");
		}
	}
	while(1);
}
