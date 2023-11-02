/*first non repeating element*/
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
	printf("The first non repeating element in the array is : ");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			break;
	    	}
			if(j==n-1)
			{
				printf("%d",a[i]);
				goto exit;
			}
		}
	}
	exit:
		;
	return 0;
}
