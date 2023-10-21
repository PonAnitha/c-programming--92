/*pattern 27*/
#include<stdio.h>
int main()
{
	int n=5,j,i,s,k,l;
	for(i=0;i<5;i++)
	{
		for(s=0;s<n-i-1;s++)
		{
			printf(" ");
		}
		if(i%2==0)
		{
			for(j=0;j<i+1;j++)
			{
				printf("*");
			}
		}
		else 
		{
			for(j=0;j<i+1;j++)
			{
				printf("-");
			}
		}
		printf("\n");
	}
	for(k=0;k<n-1;k++)
	{
		for(s=0;s<k+1;s++)
		{
			printf(" ");
		}
		if(k%2==0)
		{
			for(l=0;l<n-k-1;l++)
			{
				printf("-");
			}
		}
		else
		{
			for(l=0;l<n-k-1;l++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
