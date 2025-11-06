#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *head=NULL,*end=NULL;
void create_nodes();
void display();
int count=0;
void create_nodes()
{
	int info;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory full.");
		return;
	}
	printf("\nEnter data into a node:");
	scanf("%d",&info);
	newnode->data=info;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=end=newnode;
	}
	else{
		end->next=newnode;
		end=newnode;
	}
	count++;
	printf("\nNode created");
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nList is empty...");
		return;
	}
	temp=head;
	printf("\nList elements are..");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("****MENU****");
		printf("\n1.Create\n2.Display\n3.No.of nodes\n9.Exit");
		printf("\nEnter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create_nodes();
			break;
			case 2:display();
			break;
			case 3:printf("\nTotal nodes:%d",count);
			break;
			case 9:exit(0);
			default:
				printf("\nInvalid choice");
		}
	}
	return 0;
}
