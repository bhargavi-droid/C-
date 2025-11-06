#include<stdio.h>
int main()
{
	int a,b;
	char n;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Enter arithmetic operator:");
	scanf("%c",&n);
	switch(n)
	{
		case'+':printf("Addition is %d\n",a+b);break;
        case'-':printf("Subtraction is %d\n",a-b);break;
		case'*':printf("Multiplication is %d\n",a*b);break;
		case'/':printf("Division is %d\n",a/b);break;
		case'%':printf("Modulus is %d\n",a%b);break;
	default:
		printf("Invalid operator!\n");
	}
	return 0;
}
