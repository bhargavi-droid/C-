#include<stdio.h>
int main()
{
	int r,t,n,s=0,dig=0;
	printf("Enter n value:");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		dig=dig+1;
		t=t/10;
	}
	t=n;
	while(t>0)
	{
      r=t%10;
	  s=s+pow(r,dig);
	  t=t/10;
    }
    if(n==s)
    printf("%d is armstrong num\n",n);
    else
    printf("%d is not armstrong num",n);
    return 0;
}
