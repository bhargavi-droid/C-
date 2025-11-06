#include<stdio.h>
int main()
{
	char S1[100];
	printf("Bhargavi:24B11CS091\n");
	printf("Enter any string:");
	scanf("%[^\n]",&S1);
	if(S1[0]>='a' && S1[0]<='z')
		{
               S1[0]=S1[0]-32;
		}
	printf("\nSententialcase string is %s",S1);
	return 0;
}
