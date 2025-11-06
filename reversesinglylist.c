#include<stdio.h> 
#include<stdlib.h>
struct node 
{ 
 	int data;  	
	struct node *next; 
}; 
struct node *head=NULL,*end=NULL; 
void create_nodes(); 
void display(); 
void reverse(); 
int count=0;
void create_nodes() 
{ 
 	int info;  
	struct node *newnode;  
	newnode=(struct node*)malloc(sizeof(struct node)); 
	if(newnode==NULL) 
	 	{ 
	 	 	printf("\nMemory full"); 
	 	 	return; 
	 	} 
        printf("\nEnter data into node:"); 
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
	 	printf("\nNode created or added"); 
} 
void display() 
{ 
 	struct node *temp;
  	if(head==NULL) 
	{ 
	 	printf("\nList is empty"); 
 	 	return;} 
	 	temp=head; 
	 	printf("\nList elements are:"); 
	 	while(temp!=NULL) 
	 	{ 
 	 	printf("%d->",temp->data); 
 	 	temp=temp->next;} 
}//end of display()
void reverse() 
{ 
 	struct node *prev=NULL, *curr=head, *next1=NULL;
    if(head==NULL) 
    { 
       printf("\nList is empty"); 
	   return; 	 
	} 
 	end=head;  	
	while(curr!=NULL) 
	{ 
 	 	next1=curr->next; 
        curr->next=prev; 
 	 	prev=curr;  	 	    
		curr=next1; 
	} 
	 	head=prev; 
	 	printf("\n----LIST IS REVERSED----"); 
} 
int main() 
{ 
 	int ch;  
	while(1) 
	{ 
	 	 printf("\n****MENU****"); 
 	     printf("\n1.Create\n2.Display\n3.Reverse\n12.Exit");  
        printf("\nEnter choice:"); 
 	 	scanf("%d",&ch);  	 	
		switch(ch) 
	 	{ 
 	 	 	case 1: create_nodes();break;  	 	 	            
			case 2: display();break; 
	 	 	case 3: reverse();break; 
	 	 	case 12: exit(0); 
        default:
		       printf("\n Invalid choice"); 
	 	}//end of switch 
}//end of while           
	 	return 0;
}
