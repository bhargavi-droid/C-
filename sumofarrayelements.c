#include<stdio.h>
int main()
{
	int a[20],n,i,s;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are:\n");
	s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("The sum is %d\n",s);
	return 0;
}
