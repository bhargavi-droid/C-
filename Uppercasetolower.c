#include<stdio.h>
#include<string.h>
int main()
{
	char S1[100];
	int i;
	printf("Bhargavi:24B11CS091\n");
	printf("Enter any string:");
	scanf("%[^\n]",&S1);
	for(i=0;S1[i]!='\0';i++)
	{
		if(S1[i]>='A' && S1[i]<='Z')
		{
               S1[i]=S1[i]+32;
		}
	}
	printf("\nLowercase string is %s",S1);
	return 0;
}
