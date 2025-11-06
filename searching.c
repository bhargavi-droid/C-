#include<stdio.h>
int main()
{
	int a[20],n,i,flag,key,pos;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched:\n");
	scanf("%d",&key);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
        {
        	flag=1;
        	pos=i+1;
        	break;
		}	
	}
	if(flag==1)
	{
		printf("Element %d found at %d\n",key,pos);
	}
	else
	{
		printf("Element %d is not found.",key);
	}
	return 0;
}
