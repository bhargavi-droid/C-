#include<stdio.h>
struct student
{
	int rno;
	char name[30];
	float avg;
}S1,S2;
int main()
{
	struct student S3={101,"Ramu",78.95};
	S2=S3;
	printf("Enter roll.no,name and avg:\n");
	scanf("%d%s%f",&S1.rno,&S1.name,&S1.avg);
	printf("%d\t%s\t%f\n",S3.rno,S3.name,S3.avg);
	printf("%d\t%s\t%f\n",S1.rno,S1.name,S1.avg);
	printf("Memory created=%d\n",sizeof(S3));
	return 0;
}
