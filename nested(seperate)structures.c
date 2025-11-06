#include<stdio.h>
struct date{
	int dd;
	int mm;
	int yy;
};
struct student
{
	char name[32];
	struct date dob;
	float avg;
};
int main()
{
	struct student S1={"Ramu",{15,12,2006},18.95};
	printf("Memory created=%d\n",sizeof(S1));
	printf("%s\t%d-%d-%d\t%f\n",S1.name,S1.dob.dd,S1.dob.mm,S1.dob.yy,S1.avg);
	return 0;
}
