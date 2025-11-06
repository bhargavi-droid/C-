#include<stdio.h>
struct student
{
	int rno;
	char name[30];
	float avg;
};
int main()
{
    struct student std[100];
    int n,i;
    printf("Enter No.of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\nEnter roll.no,name and average:\n");
    	scanf("%d%s%f",&std[i].rno,&std[i].name,&std[i].avg);
	}
	printf("Roll.no:\tName:\tAverage:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t %s\t %f\n",std[i].rno,std[i].name,std[i].avg);
	}
	return 0;
}
