#include<stdio.h>
int main()
{
	int a[20],n,i,j,t;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements before sorting: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	t=a[j];
	a[j]=a[j+1];
	a[j+1]=t;
    }
  }
printf("Elements after sorting: \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
