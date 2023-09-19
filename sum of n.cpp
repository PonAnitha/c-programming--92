/*sum of n natural numbers*/
#include<stdio.h>
int main()
{
	int i,n,s;
	s=0;
	printf("Enter any number to print sum :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	s=s+i;
    }
	printf("The sum of first %d numbers is = %d\n",n,s);
	return 0;
	
}
