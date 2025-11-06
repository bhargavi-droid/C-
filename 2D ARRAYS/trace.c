#include<stdio.h>
int main()
{
	int a[10][10],m,s,n;
	int i,j;
	printf("Enter no.of rows and columns of A:");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
	printf("Enter %d elements\n",m*n);
	for(i=0;i<m;i++)
    {
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix elements are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
    s=0;
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i==j)
    		s=s+a[i][j];
		}
	}
	printf("Sum of trace of matrix is %d\n",s);
}
	else
{
	printf("Please enter square matrix\n");
}
	return 0;
}

