/*printing a triplet*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j,k,sum;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the sum to be searched : ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[i]+a[j]+a[k]==sum)
				{
				printf("True\n");
				printf("%d   %d   %d",a[i],a[j],a[k]);
				goto exit;
		    	}
			}
		}
	}
	if(i==n)
	{
		printf("False");
	}
	exit:
		;
	return 0;
}
