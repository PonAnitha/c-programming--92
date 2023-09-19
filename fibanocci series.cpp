/*fibanocci number*/
#include<stdio.h>
int main()
{
	int n,i,s,a,b;
	a=0;
	b=1;
	s=0;
	printf("Enter any number to find its fibanocci number :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		s=a+b;
		a=b;
		b=s;
    }
	printf("The %dth term of series is %d",n,s);
	return 0;
}
