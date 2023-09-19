/*multiplication table*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter any number to print its multiplication table :");
	scanf("%d",&n);
	printf("The required multiplication table for %d is:\n",n);
	for(i=1;i<=10;i++)
	{
	printf("%d*%d=%d\n",n,i,n*i);
    }
	return 0;
	
}
