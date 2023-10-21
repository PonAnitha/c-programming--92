/*pattern 28*/
#include<stdio.h>
int main()
{
	int n=5,i,j,s;
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		{
			printf(" ");
		}
		for(j=0;j<2*n-2*i-1;j++)
		{
			if (j!=0 && j!=2*n-2*i-2)
			{
				printf("-");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
