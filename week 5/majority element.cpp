/*majority element*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j,c=0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
		printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c>n/2)
		{
			printf("The majority element is %d",a[i]);
			goto exit;
		}
	}
	if(i==n)
	{
		printf("No element holds majority");
	}
	exit:
		;
	return 0;
	
}
