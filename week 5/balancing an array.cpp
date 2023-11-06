/*balncing array */
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,sum1=0,sum2=0,d;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++)
	{
		sum1=sum1+a[i];
	}
	for(i=(n/2);i<n;i++)
	{
		sum2=sum2+a[i];
	}
	if(sum1>sum2)
	{
		d=sum1-sum2;
	}
	else
	{
		d=sum2-sum1;
	}
	printf("The minimum value to be added is %d",d);
	return 0;
} 
