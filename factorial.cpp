/*factorial of n*/
#include<stdio.h>
int main()
{
	int n,i,s;
	s=1;
	printf("Enter a number to find its factorial : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	s=s*i;
    }
    printf("Factorial of %d is = %d\n",n,s);
    return 0;
	
}
