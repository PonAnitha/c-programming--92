/*length of a number*/
#include<stdio.h>
int main()
{
	int n,i,c;
	c=0;
	printf("Enter a number whose length is to be found: ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	printf("The length of above number is = %d",c);
	return 0;
}
