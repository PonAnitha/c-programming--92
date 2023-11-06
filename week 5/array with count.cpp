#include<stdio.h>
int main()
{
	int a[100],b[100];
	int n,i,k,avg,c=0,j;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter any number : ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		avg=(k+a[i])/2;
		for(j=0;j<n;j++)
		{
			if(a[j]==avg)
			{
				c++;
			}
		}
		b[i]=c;
		c=0;
	}
	printf("Another array with count result is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",b[i]);
	}
	return 0;
}
