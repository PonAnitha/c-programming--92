/*odd numbers from 1 to n*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter any number to list out all odds till the number :");
	scanf("%d",&n);
	printf("The list of odd numbers from 1 to %d is:\n",n);
	for(i=1;i<=n;i++)
	if(i%2!=0)
	printf("%d\n",i);
	return 0;
	
}
