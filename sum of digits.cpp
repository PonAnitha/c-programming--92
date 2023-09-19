/*sum of digits*/
#include<stdio.h>
int main()
{
	int n,t,s;
	s=0;
	printf("Enter any number whose sum of digits to be found :");
	scanf("%d",&n);
	while(n>0)
	{
	    t=n%10;
	    s=s+t;
	    n=n/10;
	}
	printf("The sum of digits of given number is %d",s);
	return 0;
	
}
