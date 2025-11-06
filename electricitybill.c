#include<stdio.h>
int main()
{
	int units;
	float amount;
	printf("Enter number of units:");
	scanf("%d",&units);
	if(units<=30)
	{
		amount=units*2.50;
		printf("Electricity bill is %.2f",amount);
	}
	else if(units<=70)
	{
	amount=30*2.50+(units-30)*4.00;
	printf("Elecetricity bill is %.2f",amount);
	}else if(units<=150){
		amount=30*2.50+40*4.00+(units-70)*6.00;
		printf("Electricity bill is %.2f",amount);
	}else if(units<=250){
		amount=30*2.50+40*4.00+80*6.00+(units-150)*8.00;
		printf("Electricity bill is %.2f",amount);
	}else if(units>=251){
		amount=30*2.50+40*4.00+80*6.00+100*8.00+(units-250)*10.00;
		printf("Electricity bill is %.2f",amount);
	}else
	printf("Invalid");
	return 0;
}
