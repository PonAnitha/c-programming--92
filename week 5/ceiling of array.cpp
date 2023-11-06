/*ceiling of array*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j,k;
	printf("Enter size : ");
	scanf("%d",&n);
	printf("Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter any value : ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]>=k)
		{
		    printf("Ceiling of %d is %d ",k,a[i]);
		    goto exit;
		}
	}
	exit:
		;
	return 0;
}
