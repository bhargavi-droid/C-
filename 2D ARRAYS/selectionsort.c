#include<stdio.h>
int main()
{
	int a[20],n,i,j,t,min;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	printf("After sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
