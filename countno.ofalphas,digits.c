#include<stdio.h>
int main()
{
	char S1[100];
	int i,alpha=0,upper=0,lower=0,vowel=0,cons=0,digit=0,spaces=0,spl=0;
	printf("Bhargavi:24B11CS091\n");
	printf("Enter any string:");
	scanf("%[^\n]",S1);
	for(i=0;S1[i]!='\0';i++)
	{
		if((S1[i]>='A' && S1[i]<='Z')||(S1[i]>='a' && S1[i]<='z'))
		{
			alpha++;
			if(S1[i]>='A' && S1[i]<='Z')
			{
				upper++;
			}
			if(S1[i]>='a' && S1[i]<='z')
			{
				lower++;
			}
			switch(S1[i])
			{
				case 'a':case 'A':
				case 'i':case 'I':
				case 'e':case 'E':
				case 'o':case 'O':
				case 'u':case 'U':
				vowel++;
				break;
				default:
				cons++;
			}
		}//end of if
		else if(S1[i]>='0' && S1[i]<='9')
		{
			digit++;
		}
		else if(S1[i]==' ')
		{
			spaces++;
		}
		else
		{
			spl++;
		}
	}//end of for
	printf("\nNo.of alphabets:%d",alpha);
	printf("\nNo.of upper case:%d",upper);
	printf("\nNo.of lower case:%d",lower);
	printf("\nNo.of vowels:%d",vowel);
	printf("\nNo.of consonants:%d",cons);
	printf("\nNo.of digits:%d",digit);
	printf("\nNo.of spaces:%d",spaces);
	printf("\nNo.of special characters:%d",spl);
	return 0;
}
