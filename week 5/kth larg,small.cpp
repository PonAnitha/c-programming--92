/*kth largest smallest */
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j,t,k;
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
	printf("Enter any number : ");
	scanf("%d",&k);
	printf("The %dth smallest element in array is %d\n",k,a[k-1]);
	printf("The %dth largest element in array is %d",k,a[n-k]);
	return 0;
}
