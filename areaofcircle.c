#include<stdio.h>
int main()
{
	int r;
	float A,P;
	printf("Enter r value:");
	scanf("%d",&r);
	A=3.14*r*r;
	P=2*3.14*r;
	printf("\nArea of circle is %.2f",A);
	printf("\nPerimeter of circle:%.2f",P);
	return 0;
}
