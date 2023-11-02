/*printing 3x3 matrix*/
#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("Enter the elements of 2d array : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The elements in 3x3 matrix are : \n");
	for(i=0;i<3;i++)
	{
		printf("%d  %d  %d",a[i][0],a[i][1],a[i][2]);
		printf("\n");
	}
	return 0;
}
