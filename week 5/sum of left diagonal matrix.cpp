/*sum of left diagonal elements*/
#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j,sum=0,n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("The sum of left  diagonal elements is %d",sum);
	return 0;
}
