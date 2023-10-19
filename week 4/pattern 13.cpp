/*pattern 13*/
#include<stdio.h>
int main()
{
	int n,m,i,j,k,l,s;
	printf("Enter the number of rows in top portion : ");
	scanf("%d",&n);
	printf("Enter the number of rows in lower portion : ");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-1-i;s++)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=0;k<n;k++)
	{
		printf(" ");
		for(s=0;s<k;s++)
		{
			printf(" ");
		}
		for(l=0;l<7-2*k;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
