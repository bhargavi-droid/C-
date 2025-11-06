#include<stdio.h>
void quicksort(int a[],int left,int right)
{
	int pivot=left;
	if(left<right)
	{
		int i=left+1,j=right,t;
		while(i<j)
		{
			while(a[i]<=a[pivot] && i<=right)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[j];
		a[j]=a[pivot];
		a[pivot]=t;
		quicksort(a,left,j-1);
		quicksort(a,j+1,right);
	}
}
int main()
{
	int arr[25],n,i;
	printf("Enter n value:");
	scanf("%d",&n);
	printf("Enter %d values:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("Sorted array: \n");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	return 0;
}
