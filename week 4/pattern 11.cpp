/*pattern 11*/
#include<stdio.h>
int main()
{
	int n,i,j,k,l,s,r;
	printf("Enter the number of rows :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		{
			printf(" ");
		}
		for(j=0;j<n-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=0;k<n;k++)
	{
		for(r=0;r<n-k-1;r++)
		{
			printf(" ");
		}
		for(l=0;l<k+1;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
