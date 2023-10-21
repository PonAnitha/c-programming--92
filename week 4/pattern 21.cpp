/*pattern 21*/
#include<stdio.h>
int main()
{
	int n,m,i,j,k,l,org;
	printf("Enter the starting integer and number of rows : ");
	scanf("%d%d",&m,&n);
	org=m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d",m);
		}
		printf("\n");
		m++;
	}
	m=org+n-1;
	for(k=0;k<n;k++)
	{
		for(l=0;l<n-k;l++)
		{
			printf("%d",m);
		}
		printf("\n");
		m--;
	}
	return 0;
}
