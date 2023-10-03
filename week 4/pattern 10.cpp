/*pattern 10*/
#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	printf("Enter the number of rows :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=0;k<n;k++)
	{
		for(l=0;l<n-k;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
