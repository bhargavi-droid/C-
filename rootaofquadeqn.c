#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,dis;
	float r1,r2;
	printf("Enter values of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	dis=b*b-4*a*c;
	if(dis==0)
	{
		printf("%.2f,%.2f are the roots",r1,r2);
		printf("\nRoots are real and equal.");
	}
	else if(dis>0)
	{
		r1=(-b+sqrt(dis))/(2*a);
		r2=(-b-sqrt(dis))/(2*a);
		printf("%.2f,%.2f are the roots",r1,r2);
		printf("\nRoots are real and distinct.");
	}else{
		printf("Roots are imaginary.");
	}
	return 0;
}
