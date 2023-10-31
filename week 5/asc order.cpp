/*sorting in asc.order*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,t,j;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("The new array after sorting in ascending order is :\n ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
