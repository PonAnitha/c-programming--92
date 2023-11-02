/*addition and sub*/
#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5],d[5][5];
	int i,j,m,n;
	printf("Enter the number of rows and columns in matrix : ");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of first matrix :  ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of second matrix : ");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("The sum of matrices is :\n");
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {
	    	printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
		printf("The difference of matrices is :\n");
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {
	    	printf("%d  ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
