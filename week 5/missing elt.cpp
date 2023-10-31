/*finding missing elements*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The missing element is : ");
	for(i=1;i<=n+1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]==i)
		    {
		       break;
			}
			else if(j=n-1)
			{
				printf("%d",i);
			}
		}
	}
	return 0;
}
