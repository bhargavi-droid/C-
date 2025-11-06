#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct student
{
	int m1,m2,m3,m4;
	char name[30];
	float tot;
};
int main(int argc,char*argv[])
{
struct student S1;
if(argc>=6)
{
	strcpy(S1.name,argv[1]);
	S1.m1=atoi(argv[2]);
	S1.m2=atoi(argv[3]);
	S1.m3=atoi(argv[4]);
	S1.m4=atoi(argv[5]);
	S1.tot=S1.m1+S1.m2+S1.m3+S1.m4;
	printf("Name\tTotal marks\n");
	printf("%s\t%f",S1.name,S1.tot);
}
else
{
	printf("Enter atleast 6 arguments:");
}
return 0;
}
