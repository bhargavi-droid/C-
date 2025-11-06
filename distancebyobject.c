#include<stdio.h>
int main()
{
	int speed,distance,time;
	printf("Enter speed,time:");
	scanf("%d%d",&speed,&time);
	distance=(speed*time)/60;
	printf("\nDistance travelled by an object:%dkm",distance);
	return 0;
}
