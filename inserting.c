#include<stdio.h>
int main()
{
	int a[20],n,i,pos,key;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be inserted:\n");
	scanf("%d",&key);
	printf("Enter position to be inserted:\n");
	scanf("%d",&pos);
	n=n+1;
	for(i=n-1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=key;
	printf("Elements after intersection:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
