#include<stdio.h>
int main()
{
	float a,b,c,big;
	printf("Enter three values:");
	scanf("%f%f%f",&a,&b,&c);
	big=(a>b)&&(a>c)?a:(b>c)?b:c;
	printf("\nMax of three nums:%.1f",big);
	return 0;
}
