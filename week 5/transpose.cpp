/*transpose of a matrix*/
#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n,i,j;
	printf("Enter the number of rows and columns in the matrix : ");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of matrix : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("transpose of matrix is given by : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d  ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
