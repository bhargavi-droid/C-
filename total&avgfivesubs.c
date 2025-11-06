#include<stdio.h>
int main()
{
	int a,b,c,d,e,total,average;
	printf("Enter a,b,c,d,e marks:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	printf("\nTotal marks:%d",total);
	average=total/5;
	printf("\nAverage marks:%d",average);
	return 0;
}
