#include<stdio.h>
#include<stdlib.h>
struct node //Node structre
{
	struct node *prev;
	int data;
	struct node *next;
};
void create_list();
struct node *create_node();
void display();
void reverse_order();
void insert_at_first();
void insert_at_last();
void insert_at_any_pos();
void delete_at_first();
void delete_at_last();
void delete_at_any_pos();
struct node *head=NULL,*end=NULL;
int count=0;
struct node *create_node()//create newnode
{
	int info;
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory is not allocate\n");
		return;
	}
	printf("Enter data into a node:");
	scanf("%d",&info);
	newnode->data=info;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
};
//Function to create list of nodes
void create_list()
{
	struct node*newnode=create_node();
	if(head==NULL)
	{
		head=end=newnode;
	}
	else
	{
		end->next=newnode;
		newnode->prev=end;
		end=newnode;
	}
	count++;
	printf("___NODE IS CREATED___\n");
}
//Function to display the list
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	temp=head;
	printf("List is...\n");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("End NULL\n");
}
//Funtion to display the reversed list
void reverse_order()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("LIs is empty\n");
		return;
	}
	temp=end;
	printf("List elements in reverse order is...............\n");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->prev;
	}
	printf("HEAD NULL\n");
}
void insert_at_first()
{
	struct node *newnode=create_node();
	if(head==NULL)
	{
		head=end=newnode;
	}
	else
	{
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
	count++;
	printf("NODE ID ADDED\n");
}
void insert_at_last()
{
	struct node *newnode=create_node();
	if(head==NULL)
	{
		head=end=newnode;
	}
	else
	{
		end->next=newnode;
		newnode->prev=end;
		end=newnode;
	}
	count++;
	printf("NODE ID ADDED\n");
}
void insert_at_any_pos()
{
	struct node *newnode,*temp,*curr;
	int pos,i;
	printf("\nEnter position to insert:");
	scanf("%d",&pos);
	if(pos<1||pos>count+1)
	{
		printf("Ivalid position\n");
		return;
	}
	if(pos==1)
	{
		insert_at_first();
		return;
	}
	else if(pos==count+1)
	{
		insert_at_last();
		return;
	}
	newnode=create_node();
	curr=head;
	for(i=1;i<pos;i++)
	{
		temp=curr;
		curr=curr->next;
	}
	newnode->next=curr;
	newnode->prev=temp;
	curr->prev=newnode;
	temp->next=newnode;
	count++;
	printf("___NODE IS ADDED___\n");
}
void delete_at_first()
{
	struct node *newnode,*temp;
	if(head==NULL)
	{
		printf("List is empty...\n");
		return;
	}
	temp=head;
	head=head->next;
	if(head==NULL)
	{
		end=NULL;
	}
	else
	{
		head->prev=NULL;
	}
	free(temp);
	count--;
	printf("___NODE IS DELETED___");
}
void delete_at_last()
{
	struct node *newnode,*temp;
	if(head==NULL)
	{
		printf("List is empty...\n");
		return;
	}
	temp=end;
	end=end->prev;
	if(end==NULL)
	{
		head=NULL;
	}
	else
	{
		end->next=NULL;
	}
	free(temp);
	count--;
	printf("___NODE IS DELETED___");
}
void delete_at_any_pos()
{
	struct node *newnode,*temp,*curr;
	int pos,i;
	printf("\nEnter position to delete:");
	scanf("%d",&pos);
	if(pos<1||pos>count+1)
	{
		printf("Ivalid position\n");
		return;
	}
	if(pos==1)
	{
		delete_at_first();
		return;
	}
	else if(pos==count+1)
	{
	    delete_at_last();
		return;
	}
	curr=head;
	for(i=1;i<pos;i++)
	{
		temp=curr;
		curr=curr->next;
	}
	temp->next=curr->next;
	curr->next->prev=temp;
	free(curr);
	count--;
	printf("___NODE IS DELETED___\n");
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n******MENU******");
		printf("\n1.creat\n2.display\n3.Reverse order\n4.Insert at first\n5.Insert at last\n6.Insert at any position\n");
		printf("7.Delete at first\n8.Delete at last\n9.Delete at any position\n10.Exit\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create_list();break;
			case 2:display();break;
			case 3:reverse_order();break;
			case 4:insert_at_first();break;
			case 5:insert_at_last();break;
			case 6:insert_at_any_pos();break;
			case 7:delete_at_first();break;
			case 8:delete_at_last();break;
			case 9:delete_at_any_pos();break;
			case 10:exit(0);
			default:printf("\nINVALID CHOICE");
		}
	}
	return 0;
}

