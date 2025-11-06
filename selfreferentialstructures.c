#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *n1,*n2,*n3,*head;
	n1=(struct node*)malloc(sizeof(struct node));
	n2=(struct node*)malloc(sizeof(struct node));
	n3=(struct node*)malloc(sizeof(struct node));
    n1->data=10;
    n1->next=n2;
    n2->data=20;
    n2->next=n3;
    n3->data=30;
    n3->next=NULL;
    head=n1;
    while(head!=NULL)
    {
    	printf("Data at node=%d\n",head->data);
    	head=head->next;
	}
	return 0;
}
