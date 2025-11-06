#include<stdio.h>
int main()
{
	int a[100],n,i,flag,left,right,key,pos,mid;
	printf("Enter n value:");
	scanf("%d",&n);
	printf("Enter %d elements in sorting order:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter value to be searched:");
	scanf("%d",&key);
	left=0;
	right=n-1;
	flag=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(a[mid]==key)
		{
			flag=1;
			pos=mid+1;
			break;
		}
		else if(key<a[mid])
		{
			right=mid-1;
		}
		else if(key>a[mid])
		{
			left=mid+1;
		}
	}//end of while
	if(flag==1)
	{
		printf("Element %d found at %d\n",key,pos);
	}
	else
	{
		printf("Element %d not found",key);
	}
	return 0;
}
